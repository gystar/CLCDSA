#include <stdio.h>
#include <math.h>
int main(void){
  int x,max=1;
  scanf("%d",&x);
  for(int i=1;i<=x;i++){
    for(int j=2;j<=x;j++){
      if(max<pow(i,j)&&pow(i,j)<=x) max=pow(i,j);
    }
  }
  printf("%d",max);
  return 0;
} 