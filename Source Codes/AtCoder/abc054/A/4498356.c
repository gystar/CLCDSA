#include <stdio.h>
#include <string.h>
int main(){
  int a, b;

  scanf("%d%d", &a, &b);

  if(a == 1){
    a = 15;
  }
  if(b == 1){
    b = 15;
  }

  if(a > b){
    printf("Alice");
  }else if(a == b){
    printf("Draw");
  }else if(a < b){
    printf("Bob");
  }
  printf("\n");
  
} 