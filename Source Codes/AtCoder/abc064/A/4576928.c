#include <stdio.h>
#include <string.h>
int main(){
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  if((a * 100 + b * 10 + c) % 4 == 0){
    printf("YES");
  }else{
    printf("NO");
  }

  printf("\n");
  
} 