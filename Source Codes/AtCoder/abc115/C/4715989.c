// Ver19.03
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define INF 1 << 29
#define LLINF 4545454545454545454
#define MOD 1000000007
#define ll long long
#define ull unsigned long long
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int upll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? -1 : *(ll *)a > *(ll *)b ? 1 : 0; }
int downll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? 1 : *(ll *)a > *(ll *)b ? -1 : 0; }
void sortup(ll *a, int n) { qsort(a, n, sizeof(ll), upll); }
void sortdown(ll *a, int n) { qsort(a, n, sizeof(ll), downll); }

ll a[100005];
int main()
{
  ll n, k;
  ll ans = LLINF;
  scanf("%lld%lld", &n, &k);
  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &a[i]);
  }
  sortup(a, n);
  for (int i = k - 1; i < n; i++)
  {
    ll tmp = a[i] - a[i - k + 1];
    ans = MIN(ans, tmp);
  }
  printf("%lld\n", ans);
  return 0;
} 