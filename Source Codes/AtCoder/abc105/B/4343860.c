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
  int n;
  int maybe = 0;
  scanf("%d", &n);
  for (int i = 0; i <= n / 4; i++)
  {
    for (int j = 0; j <= n / 7; j++)
    {
      maybe = 4 * i + 7 * j;
      if (maybe == n)
      {
        puts("Yes");
        return 0;
      }
    }
    maybe = 0;
  }
  puts("No");
  return 0;
} 