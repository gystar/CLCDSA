#include <math.h>

int main(void){
  
  char S[128];
  long long K;
  long long i, len = 0;
  long long one = 0;

  scanf("%s", S);

  while(S[len]){
    len++;
  }

  for(i = 0; i < len; i++){
    if(S[i] == '1'){
      one++;
    }else{
      break;
    }
  }
  
  scanf("%lld", &K);

  if(K <= one){
    printf("1\n");
  }else{
    printf("%c\n", S[one]);
  }
  
  return 0;
} 