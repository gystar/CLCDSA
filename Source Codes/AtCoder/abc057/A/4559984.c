#include <stdio.h>
#include <string.h>
int main(){
  int a, b;

  scanf("%d%d", &a, &b);

  printf("%d", (a + b) % 24 );
  
  printf("\n");
  
} 