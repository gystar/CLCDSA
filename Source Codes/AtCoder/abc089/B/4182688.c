#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);
  char S;
  int flag = 0;

  for(int i = 0;i < N;i++){
    scanf("%c",&S);
    if(S == 'Y'){
      flag = 1;
      break;
    }
  }

  if(flag){
    printf("Four\n");
  }else{
    printf("Three\n");
  }
  return 0;
} 