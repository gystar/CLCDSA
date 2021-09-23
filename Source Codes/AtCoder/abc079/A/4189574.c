#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  if((N/10)%111 == 0 || (N%1000)%111 == 0){
    printf("Yes\n");
  }else{
    printf("No\n");
  }

  return 0;
} 