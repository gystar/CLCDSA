#include<stdio.h>
int main(){
  int a,b,c,d,e,f,i;
  scanf("%d %d",&a,&b);
  scanf("%d %d",&c,&d);
  scanf("%d %d",&e,&f);
  
  a = (a*b)/10;
  c = (c*d)/10;
  e = (e*f)/10;
  
  printf("%d\n",a+c+e);
  
  return 0;
} 