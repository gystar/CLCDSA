#include <stdio.h>
#include <string.h>
int main(){
  int n;

  scanf("%d", &n);

  if((n / 100) == (n % 10)){
    printf("Yes");
  }else{
    printf("No");

  }


  printf("\n");
  
} 