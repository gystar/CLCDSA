#include<stdio.h>
 
int main(void)
{
  int i,N,x=0,y=0;
  scanf("%d",&N);
  for(i=1;i<=N;i++){
    x+=800;
    if((i%15)==0){
      y+=200;
    }
  }
  printf("%d",x-y);
  return 0;
} 