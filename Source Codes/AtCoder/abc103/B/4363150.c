// Ver19.02
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i, l, r) for (ll i = (l); i < (r); i++)
#define max(p, q) ((p) > (q) ? (p) : (q))
#define min(p, q) ((p) < (q) ? (p) : (q))
int upll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? -1 : *(ll *)a > *(ll *)b ? 1 : 0; }
void sortup(ll *a, int n) { qsort(a, n, sizeof(ll), upll); }

char s[220], t[110];
int main()
{
  scanf("%s%s", s, t);
  ll n = strlen(s);
  for (int i = 0; i < n; i++)
  {
    if (!strcmp(s + i, t))
    {
      puts("Yes");
      return 0;
    }
    s[n + i] = s[i];
  }
  puts("No");
} 