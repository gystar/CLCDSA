// Ver19.02
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define INF 1 << 29
#define LLINF 4545454545454545454
#define MOD 1000000007
#define ll long long
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int upll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? -1 : *(ll *)a > *(ll *)b ? 1 : 0; }
int downll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? 1 : *(ll *)a > *(ll *)b ? -1 : 0; }
void sortup(ll *a, int n) { qsort(a, n, sizeof(ll), upll); }
void sortdown(ll *a, int n) { qsort(a, n, sizeof(ll), downll); }

int main()
{
  ll a, b, c, k;
  ll ans;
  scanf("%lld%lld%lld%lld", &a, &b, &c, &k);
  for (int i = 0; i < k; i++)
  {
    ll biggest = MAX(MAX(a, b), c);
    if (a == biggest)
      a *= 2;
    else if (b == biggest)
      b *= 2;
    else
      c *= 2;
  }
  printf("%lld\n", a + b + c);
  return 0;
} 