#include <stdio.h>
#include <string.h>
int main(){
  char a[2], b[2];

  scanf("%s%s", a, b);

  if(strcmp(a, b) == 0){
    printf("H");
  }else{
    printf("D");
  }

  printf("\n");
  
} 