#include <stdio.h>

int main(void){
  char S[100];
  scanf("%s",S);

  long long K;
  scanf("%lld",&K);

  for(int i = 0;i < K;i++){
    if(S[i] != '1'){
      printf("%c\n",S[i]);
      return 0;
    }
  }

  printf("1\n");

  return 0;
} 