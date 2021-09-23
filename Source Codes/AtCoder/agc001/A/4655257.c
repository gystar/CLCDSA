#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
  return *(int *)a - *(int *)b;
}
int main(){
  int n;
  scanf("%d", &n);
  int l[2*n];
  int i;
  for(i=0;i<2*n;i++){
    scanf("%d",&l[i]);
  }
  qsort(l, 2*n, sizeof(int), compare);
  int ans = 0;
  for(i=0;i<n;i++){
    ans += l[2*i];
  }
  printf("%d\n", ans);
  return 0;
} 