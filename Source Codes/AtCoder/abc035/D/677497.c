#include <stdio.h>
#include <malloc.h>
#include <memory.h>


#define N (100000+10)
int gain[N];
struct link {
    int pos;
    int c;
    struct link *next;
};
struct heap_ent {
    long long int cost;
    int from;
    int to;
};
struct link *road_for[N];
struct link *road_bak[N];
char vis_from[N];
char vis_to[N];
long long int to_cost[N];
long long int from_cost[N];

struct heap_ent *heap[N];
int heapn;

struct link *
new_link(int x, long long int c, struct link *n)
{
    struct link *r = malloc(sizeof(struct link));
    r->pos = x;
    r->c = c;
    r->next = n;
    return r;
}
int n, m;
long long lim;
void
init(void)
{
    scanf("%d%d%lld", &n, &m, &lim);

    int i;
    for (i = 1; i <= n; ++i)
        scanf("%d", &gain[i]);
    int a,b,c;
    for (i = 1; i <= m; ++i) {
        scanf("%d%d%d", &a, &b, &c);
        road_for[a] = new_link(b, c, road_for[a]);
        road_bak[b] = new_link(a, c, road_bak[b]);
    }
}

struct heap_ent *
popheap(void)
{
    if (!heapn)
        return 0;
    heapn--;
    struct heap_ent *r = heap[0];
    heap[0] = heap[heapn];
    heap[heapn] = 0;
    int cur = 0;
    for (;;) {
        int lson = cur*2 + 1;
        int rson = lson+1;
        if  (lson >= heapn)
            break;
        if (rson >= heapn)
            rson = 0;
        if (heap[cur]->cost <  heap[lson]->cost) {
            if (!rson || heap[cur]->cost <=  heap[rson]->cost)
                break;
            struct heap_ent *t = heap[rson];
            heap[rson] = heap[cur];
            heap[cur] = t;
            cur = rson;
        } else {
            if (!rson ||
                heap[rson]->cost > heap[lson]->cost) {
                struct heap_ent *t = heap[lson];
                heap[lson] = heap[cur];
                heap[cur] = t;
                cur = lson;
            } else {
                struct heap_ent *t = heap[rson];
                heap[rson] = heap[cur];
                heap[cur] = t;
                cur = rson;
            }
        }
    }
    return r;
}

void
enheap(long long int cost, int from, int to)
{
    {
        struct heap_ent *he = malloc(sizeof(struct heap_ent));
        he->cost = cost;
        he->from = from;
        he->to = to;
        heap[heapn] = he;
        heapn++;
    }
    int cur = heapn-1;
    while (cur) {
        int par = (cur-1) >> 1;
        if (heap[par]->cost < heap[cur]->cost)
            return;
        struct heap_ent *t = heap[par];
        heap[par] = heap[cur];
        heap[cur] = t;
        cur = par;
    }
}
int
main(void)
{
    init();
    int cur = 1;
    long long int cur_cost = 0;
    heapn = 0;
    int i;
    vis_from[cur] = vis_to[cur] = 1;
    to_cost[cur] = from_cost[cur] = 0;
    for (;;) {
        struct link *ptr;
        for (ptr = road_for[cur]; ptr; ptr = ptr->next)
            if (ptr->c + cur_cost < lim)
                enheap(ptr->c + cur_cost, cur, ptr->pos);

        for (;;) {
            struct heap_ent *he = popheap();
            if (!he)
                goto ex;
            if (vis_to[he->to])
                continue;
            cur = he->to;
            cur_cost = he->cost;
            vis_to[cur]++;
            to_cost[cur] = cur_cost;
            //printf("To %d cost %lld\n", cur, cur_cost);
            free(he);
            break;
        }
    }
 ex:;
    cur = 1;
    cur_cost = 0;
    heapn = 0;
    for (;;) {
        struct link *ptr;
        for (ptr = road_bak[cur]; ptr; ptr = ptr->next)
            if (ptr->c + cur_cost < lim)
                enheap(ptr->c + cur_cost, ptr->pos, cur);

        for (;;) {
            struct heap_ent *he = popheap();
            if (!he)
                goto ex2;
            if (vis_from[he->from]) {
                free(he);
                continue;
            }
            cur = he->from;
            cur_cost = he->cost;
            vis_from[cur]++;
            from_cost[cur] = cur_cost;
            //printf("From %d cost %lld\n", cur, cur_cost);
            free(he);
            break;
        }
    }
 ex2:;
    long long int max = lim * gain[1];
    for (i = 1; i <= n; ++i) {
        if (!vis_from[i] || !vis_to[i])
            continue;
        long long int point = lim - (to_cost[i] + from_cost[i]);
        if (point < 0)
            continue;
        if (0) printf("%d %lld %lld < %lld\n", i,
                      (to_cost[i] + from_cost[i]),
                      point*gain[i], lim);
        if (max < point * gain[i])
            max = point * gain[i];;
    }
    printf("%lld\n", max);
    return 0;
} 