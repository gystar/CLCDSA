#include <stdio.h>
#include <string.h>
int main(){
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  if(c >= a && c <= b){
    printf("Yes");
  }else{
    printf("No");
  }

  printf("\n");
  
} 