#include <stdio.h>
int main(void){
int a;
  int b;
  b=0;
  scanf("%d",&a);
  printf("%d\n",a);
  for(;;){
  printf("1\n");
  b=b+1;
  if(a==b){break;}
  }
return 0;
} 