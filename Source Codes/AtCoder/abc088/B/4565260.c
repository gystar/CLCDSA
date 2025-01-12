// Ver19.03
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

int main()
{
  ll n, ans = 0;
  ll hoge[101];
  scanf("%lld", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &hoge[i]);
  }
  sortdown(hoge, n);
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      ans += hoge[i];
    else
      ans -= hoge[i];
  }
  printf("%lld\n", ans);
  return 0;
} 