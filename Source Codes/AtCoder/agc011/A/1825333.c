#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
int main() {
  int n,c,k,t[100000],x,i,a;
  scanf("%d %d %d",&n,&c,&k);
  for (i=0;i<n;i++) {
    scanf("%d",&t[i]);
  }
  qsort(t, n, sizeof(int), comp);
  for (i=0;i<n;i+=a) {
    a=0;
    while (a<c&&t[i+a]-t[i]<=k) {
      a++;
    }
    x++;
  }
  printf("%d\n",x);
  return 0;
} 