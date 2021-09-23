#include <stdio.h>
int main(){
  long int n;
  scanf("%ld",&n);
  if(n%2){
    printf("%ld", n*2);
  }
  else{
    printf("%ld", n);
  }
  return 0;
} 