#include <stdio.h>
int main(void){
int a;
  scanf("%d",&a);
  if(a<=59){printf("Bad\n");}
  if(a<=89&&a>=60){printf("Good\n");}
  if(a<=99&&a>=90){printf("Great\n");}
  if(a==100){printf("Perfect\n");}
return 0;
} 