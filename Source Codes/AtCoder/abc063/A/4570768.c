#include <stdio.h>
#include <string.h>
int main(){
  int a, b;

  scanf("%d%d", &a, &b);

  if(a + b >= 10){
    printf("error");
  }else{
    printf("%d", a + b);
  }

  printf("\n");
  
} 