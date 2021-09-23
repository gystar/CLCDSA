#include <stdio.h>
int main(int argc, char **argv)
{
  char s[1024*1024]={};
  int res[1024*1024]={};
  int n,q,l,r;
  int i;
  scanf("%d %d\n", &n, &q);
  gets(s);
  for (i=1;i<n;i++) {
    res[i] = res[i-1];
    if ((s[i]=='C') && (s[i-1]=='A')) {
      res[i]++;
    }
  }
  for (i=0;i<q;i++) {
    scanf("%d %d\n", &l, &r);
    l--;
    r--;
    printf("%d\n", res[r]-res[l]);
  }
  return 0;
} 