#include <stdio.h>

int main(){
  int n,count = 0,check = 0;
  scanf("%d",&n);
  int a[n];
  for(int i=0; i < n; ++i){
    scanf("%d",&a[i]);
  }
  while(1){
    for(int i=0; i < n; ++i){
      if(a[i]%2 == 1){
        check = 1;
        break;
      }else a[i]/=2;
    }
    if(check == 1) break;
    else count++;
  }
  printf("%d",count);
  return 0;
} 