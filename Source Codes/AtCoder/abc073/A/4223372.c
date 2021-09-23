#include <stdio.h>

int main(void){
  int N;
  int flag = 0;
  scanf("%d",&N);

  if(N/10 == 9) flag = 1;
  if(N%10 == 9) flag = 1;
  
  if(flag) printf("Yes\n");
  else printf("No\n");

  return 0;
} 