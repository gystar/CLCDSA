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
  int d, n;
  scanf("%d%d", &d, &n);
  if (d == 0)
  {
    printf("%d\n", n == 100 ? 101 : n);
  }
  else if (d == 1)
  {
    printf("%d\n", n == 100 ? 10100 : n * 100);
  }
  else
  {
    printf("%d\n", n == 100 ? 1010000 : n * 100 * 100);
  }
  return 0;
} 