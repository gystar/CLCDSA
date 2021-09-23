#include <stdio.h>
int main(void){
  int a,b,amari;
  scanf("%d",&a);
  scanf("%d",&b);
  amari=a%b;
  if(amari==0) printf("%d\n",0);
  else printf("%d\n",b-amari);
  return 0;
} 