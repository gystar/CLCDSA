#include<stdio.h>
int main (){
int a,b,x,y;
  scanf ("%d%d%d%d",&a,&b,&x,&y);
  if (a>b){
  printf("%d",b*x+((a-b)*y));
  }
  else {
  printf("%d",a*x);
  }
return 0;
} 