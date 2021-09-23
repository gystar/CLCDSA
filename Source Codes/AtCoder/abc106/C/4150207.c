#include <stdio.h>

int main(void){
  char data[100];
  long long K;

  scanf("%s",data);
  scanf("%lld",&K);

  for(int i = 0;i < K;i++){
    if(data[i] != '1'){
      printf("%d\n",data[i]-48);
      return 0;
    }
  }

  printf("1\n");
  return 0;
} 