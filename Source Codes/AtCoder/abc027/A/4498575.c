#include <stdio.h>
int main(void){
int a,b,c,d;
  scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
  if(a==b&&a!=c){printf("%d\n",c);return 0;}
  if(a==c&&a!=b){printf("%d\n",b);return 0;}
  if(b==c&&b!=a){printf("%d\n",a);return 0;}
printf("%d\n",a);return 0;
return 0;
} 