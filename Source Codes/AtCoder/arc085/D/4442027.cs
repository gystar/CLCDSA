using System;
using System.Linq;
using System.Numerics;
using System.Collections.Generic;
using static System.Math;
using Debug = System.Diagnostics.Debug;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        var bit = Console.ReadLine().Split().Select(int.Parse).ToList();
        var ruiseki = new int[n + 1];
        for (int i = 0; i < n; i++)
        {
            ruiseki[i + 1] = ruiseki[i] + bit[i];
        }
        int q = int.Parse(Console.ReadLine());
        var queries = Enumerable.Repeat(0, q).Select(_ => Console.ReadLine().Split().Select(int.Parse).ToList()).OrderBy(x => x[0]).ToList();

        //????????????????????????
        //????dp[i] := Min(dp[0..begin - 1] + score[begin..end], dp[begin] + score[begin + 1..end],dp[begin + 1] + score[begin + 2..end] ... dp[end - 1] + score[end..end]);
        //dp2[begin..end] :=  - score[0..end]
        //?????dp2[begin..end] + score[0..begin - 1] := 
        //?????????? ????????????1????????????????????????
        //score[a..b] := count0[a..b] - count1[a..b] == (b - a + 1) - count1[a..b] - count1[a..b]

        //???????????????????????????
        //????????minimum score????????????????? := 1???????????????????????
        SegmentTree<int> RMQ1 = new SegmentTree<int>(Enumerable.Repeat(ruiseki.Last(), n + 1).ToArray(), int.MaxValue, (x, y) => Min(x, y));
        //?????????1?????????????????????
        //RMQ[a..b]?????????????1???????????????1????0???????????????
        //?????1???????????????0????????????????-1?????????
        //?????
        SegmentTree<int> RMQ2 = new SegmentTree<int>(Enumerable.Repeat(int.MaxValue / 2, n + 1).ToArray(), int.MaxValue, (x, y) => Min(x, y));
        foreach (var query in queries)
        {
            int l = query[0];
            int r = query[1];
            //?????????[l,r](1-indexed)
            //???
            int sectionLength = (r - l + 1);
            //ruiseki[a] := a???1?? ??
            int countSection1 = ruiseki[query[1]] - ruiseki[query[0] - 1];
            int countSection0 = sectionLength - countSection1;
            //update??count1???????count0?????????????????????????count0 - count1???
            //???????????sectionLength - count1 * 2 ??????
            int sectionScore = countSection0 - countSection1;

            //?????????0?????????????????RMQ2???????????????
            int untilBeginScore = (query[0] - 1) - ruiseki[query[0] - 1] * 2;

            //?????????????????????????????????
            var op = Min(RMQ1.Query(0, query[0] - 1) + sectionScore, RMQ2.Query(query[0], query[1]) + untilBeginScore + sectionScore);
            
            //RMQ1???
            RMQ1.Operate(query[1], op);
            RMQ2.Operate(query[1], op - (query[1] - ruiseki[query[1]] * 2));
        }
        Console.WriteLine(RMQ1.Query(0, RMQ1.Size - 1));
    }
}

class SegmentTree<T>
{
    public int Size { get; private set; }
    T IdentityElement;
    T[] Data;
    Func<T, T, T> Merge;
    int LeafCount;

    public SegmentTree(T[] elems, T identityElement ,Func<T, T, T> merge)
    {
        Size = elems.Length;
        Merge = merge;
        IdentityElement = identityElement;
        LeafCount = 1;
        while (LeafCount < elems.Length) LeafCount <<= 1;

        Data = new T[LeafCount * 2];
        elems.CopyTo(Data, LeafCount);
        for (int i = LeafCount - 1; i >= 0; i--) Data[i] = Merge(Data[i * 2], Data[i * 2 + 1]);
    }

    public void Operate(int i, T x)
    {
        int ind = LeafCount + i;
        Data[LeafCount + i] = Merge(x, Data[LeafCount + i]);
        while (0 < (ind >>= 1))
        {
            Data[ind] = Merge(Data[ind * 2], Data[ind * 2 + 1]); 
        }
    }

    public T Query(int l, int r) => Query(l, r, 1, 0, LeafCount - 1);

    private T Query(int l, int r, int i, int x, int y)
    {
        if (y < l || r < x) return IdentityElement;
        if (l <= x && y <= r) return Data[i];
        return Merge(Query(l, r, i * 2, x, (x +  y) / 2), Query(l, r, i * 2 + 1, (x + y) / 2 + 1, y));
    }
}