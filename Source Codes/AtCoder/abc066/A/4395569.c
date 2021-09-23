#include <stdio.h>
int main(void){
int a,b,c;
  int min=0;
  scanf("%d %d %d",&a,&b,&c);
min=a+b;
    if(min>a+c){min=a+c;}
    if(min>b+c){min=b+c;}
  printf("%d",min);
return 0;
} 