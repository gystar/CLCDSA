#include<stdio.h>
int main(void){
  int D,N,i,s,t=1;
  scanf("%d %d",&D,&N);
  for(i=0;i<D;i++){
    t*=100;
  }
  s=t*100;
  if(t*N % s ==0){
    printf("%d\n",t*(N+1));
  }else{
  	printf("%d\n",t*N);
  }
  return 0;
} 