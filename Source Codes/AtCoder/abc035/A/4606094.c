#include <stdio.h>
int main(void){
int a,b;
  scanf("%d %d",&a,&b);
  if(a%16==b%9){printf("16:9\n");}
  else{printf("4:3\n");}
  
return 0;
} 