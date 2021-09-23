#include <stdio.h>
int main(void){
int a,b;
  scanf("%d",&a);
    scanf("%d",&b);
  if(a%b!=0){
  printf("%d\n",b-a%b);}
  else{
  printf("0\n");
  }
return 0;
} 