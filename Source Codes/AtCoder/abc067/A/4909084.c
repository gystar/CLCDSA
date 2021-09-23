#include <stdio.h>
#include <string.h>
int main(){
  int a, b;

  scanf("%d%d", &a, &b);

  if(a % 3 == 0){
    printf("Possible");
  }else if(b % 3 == 0){
    printf("Possible");
  }else if((a + b) % 3 == 0){
    printf("Possible");
  }else{
    printf("Impossible");
  }
  printf("\n");
  
} 