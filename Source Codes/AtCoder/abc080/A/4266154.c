#include<stdio.h>
int main(void){
  int n,a,b;
  scanf("%d %d %d",&n,&a,&b);
  if(n*a>b){
    printf("%d\n",b);
  }else{
    printf("%d\n",a*n);
  }
  return 0;
} 