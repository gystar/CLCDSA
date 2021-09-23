#include<stdio.h>

int main(void){
  int i,a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a>b) printf("%d\n",c/b);
  else printf("%d\n",c/a);
  return 0;
} 