#include<stdio.h>

int main(void){
  int a=0,b=0,c=1,n,tmp;
  scanf("%d",&n);
  if(n==1){printf("%d\n",a); return 0;}
  else if(n==2){printf("%d\n",b); return 0;}
  n-=3;
  while(n--){
    tmp=(a+b+c)%10007;
    a=b;
    b=c;
    c=tmp;
  }
  printf("%d\n",c);
  return 0;
} 