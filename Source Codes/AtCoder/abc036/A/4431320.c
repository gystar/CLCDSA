#include <stdio.h>
int main(void){
int a,b;
  scanf("%d %d",&a,&b);
  b%a==0 ? printf("%d\n",b/a) : printf("%d\n",(b/a)+1);
return 0;
} 