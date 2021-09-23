#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  return *(int *)b - *(int *)a;
}

int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  int i;
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  qsort(a, n, sizeof(int), compare);
  int ans = 0;
  for(i=0;i<n;i++){
    if(i%2==0){
      ans += a[i];
    }else{
      ans -= a[i];
    }
  }
  printf("%d\n", ans);
  return 0;
} 