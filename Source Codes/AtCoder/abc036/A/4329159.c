#include<stdio.h>

int main(void){
  int i,a,b;
  scanf("%d%d",&a,&b);
  for(i=0;;i++){
    if(i*a>=b) break;
  }
  printf("%d\n",i);
  return 0;
} 