#include <stdio.h>
#include <math.h>
int main(void){
  int x,costmin=1E9,i,j;
  scanf("%d",&x);
  for(i=1;i<=1E9;i++){
    int sum=(i*(i+1))/2;
    if(sum>=x) {printf("%d",i);return 0;}
  }
  return 0;
} 