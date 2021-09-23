#include<stdio.h>
int main(){
  int a,b,i,x=0;
  scanf("%d%d",&a,&b);
  for(i=1;i<b-a;i++){
    x+=i;
  }
  printf("%d",x-a);
} 