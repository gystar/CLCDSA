#include<stdio.h>
int main(void)
{
  int a,b,c,d,i;

  scanf("%d %d %d",&a,&b,&c);
  if(1>a) return 1;
  else if (c>100) return 1;
  for(i=0;i<c;i=i+a){
    d=b/a;
  }
  if(d>=c) printf("%d\n",c);
  else if(d==0) printf("%d\n",d);
  else printf("%d\n",d);
  return 0;
} 