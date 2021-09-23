#include<stdio.h>
#include<math.h>

int main(void){
  int i,j,x,max=1;
  
  scanf("%d",&x);
  
  for(i=2;i<x/2;i++){
    for(j=1;(int)pow(i,j)<=x;j++){
      if(max<(int)pow(i,j)){
        max = (int)pow(i,j);
      }
    }
  }
  
  printf("%d\n",max);
  
  return 0;
} 