#include <stdio.h>
#include <stdlib.h>
int main(void){
int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(abs(a-b)>abs(a-c)){printf("B");}
  else{printf("A");}
return 0;
} 