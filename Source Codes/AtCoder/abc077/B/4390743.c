#include<stdio.h>

int main(void){
  long int i,n;
  scanf("%ld",&n);
  for(i=0;;i++){
    if(i*i>n) break;
  }
  printf("%ld\n",(i-1)*(i-1));
  return 0;
} 