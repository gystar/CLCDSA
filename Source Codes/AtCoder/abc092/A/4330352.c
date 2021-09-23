#include <stdio.h>
int main(void){
int a,b,c,d;
  int yasui1,yasui2;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  if(a>=b){yasui1=b;}
  else if(b>a){yasui1=a;}
    if(c>=d){yasui2=d;}
  else if(d>c){yasui2=c;}
  printf("%d",yasui1+yasui2);
return 0;
} 