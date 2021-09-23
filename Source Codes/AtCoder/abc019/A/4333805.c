#include<stdio.h>
int main (){
int a,b,c,h,k;
scanf ("%d%d%d",&a,&b,&c);
  if (a>b){
  h=a;
  a=b;
  b=h;
  }
  if (b>c){
  k=b;
  b=c;
  c=k;
  }
  if (a>b){
  h=a;
  a=b;
  b=h;
  }
  printf ("%d\n",b);
return 0;
} 