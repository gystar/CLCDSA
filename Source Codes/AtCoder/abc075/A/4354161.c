#include <stdio.h>
int main(void){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a==b){printf("%d",c);}
  if(a==c){printf("%d",b);}
  if(b==c){printf("%d",a);}
return 0;
} 