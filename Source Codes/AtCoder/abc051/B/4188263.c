#include<stdio.h>

int main(){
  int K, S, i, j, k, count = 0;
  scanf("%d %d", &K, &S);
  for (i = 0; i <= K; i++){
    for (j = 0; j <= K; j++){
      if(S - i - j < 0){
        break;
      }
      if(S - i - j <= K){
        count++;
      }
    }
  }
  
  printf("%d\n", count);
  
  return 0;
} 