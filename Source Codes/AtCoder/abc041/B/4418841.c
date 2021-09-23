#include<stdio.h>

int main(void){
  long a,b,c;
  scanf("%ld%ld%ld",&a,&b,&c);
  printf("%ld",a%1000000007*b%1000000007*c%1000000007);
  return 0;
} 