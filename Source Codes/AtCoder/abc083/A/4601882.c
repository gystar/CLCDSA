#include <stdio.h>
int main(void){
int a,b,c,d;
  int suml,sumr;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  suml=a+b;
  sumr=c+d;
  if(suml==sumr){printf("Balanced\n");}
  if(suml>sumr){printf("Left\n");}
  if(suml<sumr){printf("Right\n");}
return 0;
} 