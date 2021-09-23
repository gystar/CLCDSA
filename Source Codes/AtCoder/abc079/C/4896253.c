#include<stdio.h>

int main(void){
  int n,i,a,b,c,d;
  scanf("%d",&n);
  d=n%10;
  n/=10;
  c=n%10;
  n/=10;
  b=n%10;
  n/=10;
  a=n;
  if(a-b-c-d==7) printf ("%d-%d-%d-%d=7\n",a,b,c,d);
  else if(a-b-c+d==7) printf("%d-%d-%d+%d=7\n",a,b,c,d);
  else if(a-b+c-d==7) printf("%d-%d+%d-%d=7\n",a,b,c,d);
  else if(a-b+c+d==7) printf("%d-%d+%d+%d=7\n",a,b,c,d);
  else if(a+b-c-d==7) printf("%d+%d-%d-%d=7\n",a,b,c,d);
  else if(a+b-c+d==7) printf("%d+%d-%d+%d=7\n",a,b,c,d);
  else if(a+b+c-d==7) printf("%d+%d+%d-%d=7\n",a,b,c,d);
  else if(a+b+c+d==7) printf("%d+%d+%d+%d=7\n",a,b,c,d);
  return 0;
} 