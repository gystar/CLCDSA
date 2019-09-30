using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace Competitive
{
    internal class Solution
    {
        public int N, M;
        public Graph G;
        public void Run()
        {
            // Input
            {
                var line = Input.ReadIntArray();
                N = line[0];
                M = line[1];
            }

            // Graph
            G = new Graph(N);
            for (int i = 0; i < M; i++)
            {
                var line = Input.ReadIntArray();
                int u = line[0] - 1;
                int v = line[1] - 1;
                // ?????
                var e1 = new Edge(u, v, 0);
                var e2 = new Edge(v, u, 0);
                e1.Rev = e2;
                e2.Rev = e1;
                G[u].Edges.Add(e1);
                G[v].Edges.Add(e2);
            }

            var dic = new HashSet<int>();
            var list1 = new List<int>();
            var list2 = new List<int>();
            int a1 = 0;
            int a2 = G[a1].Edges[0].To;

            dic.Add(a1);
            dic.Add(a2);
            list1.Add(a1);
            list2.Add(a2);

            while (true)
            {
                bool flg = true;
                foreach (var e in G[a1].Edges)
                {
                    if (!dic.Contains(e.To))
                    {
                        a1 = e.To;
                        dic.Add(a1);
                        list1.Add(a1);
                        flg = false;
                        break;
                    }
                }

                if (flg) break;
            }

            while (true)
            {
                bool flg = true;
                foreach (var e in G[a2].Edges)
                {
                    if (!dic.Contains(e.To))
                    {
                        a2 = e.To;
                        dic.Add(a2);
                        list2.Add(a2);
                        flg = false;
                        break;
                    }
                }

                if (flg) break;
            }

            var ret = new List<int>(list1);
            ret.Reverse();
            ret.AddRange(list2);
            ret = ret.Select(e => e + 1).ToList();

            Console.WriteLine(ret.Count);
            Console.WriteLine(string.Join(" ", ret));
        }

    }

    internal class Graph
    {
        public List<Node> Nodes;

        public Node this[int i]
        {
            set { Nodes[i] = value; }
            get { return Nodes[i]; }
        }

        public Graph(int N)
        {
            Nodes = new List<Node>();
            for (int i = 0; i < N; i++)
            {
                Nodes.Add(new Node(i));
            }
        }

    }

    internal class Node
    {
        public List<Edge> Edges;
        public int Dist;
        public int No;

        public Node(int no)
        {
            this.No = no;
            Dist = int.MaxValue;
            Edges = new List<Edge>();
        }
    }

    internal class Edge
    {
        public int From;
        public int To;
        public int Cost;
        public Edge Rev;

        public Edge(int fr, int to, int cost = 0)
        {
            From = fr;
            To = to;
            Cost = cost;
        }

        public bool IsRev(Edge e)
        {
            return Rev != null && (e == Rev);
        }
    }

    // libs ----------


    // common ----------

    internal static class Input
    {
        public static string ReadString()
        {
            string line = Console.ReadLine();
            return line;
        }

        public static int ReadInt()
        {
            string line = Console.ReadLine();
            return int.Parse(line);
        }

        public static int[] ReadIntArray()
        {
            string line = Console.ReadLine();
            return line.Split(' ').Select(int.Parse).ToArray();            
        }

        public static long ReadLong()
        {
            string line = Console.ReadLine();
            return long.Parse(line);
        }

        public static long[] ReadLongArray()
        {
            string line = Console.ReadLine();
            return line.Split(' ').Select(long.Parse).ToArray();
        }

        public static double[] ReadDoubleArray()
        {
            string line = Console.ReadLine();
            return line.Split(' ').Select(double.Parse).ToArray();
        }
    }
    
    internal class Program
    {
        public static void Main(string[] args)
        {
            var s = new Solution();
            s.Run();
        }
    }
}