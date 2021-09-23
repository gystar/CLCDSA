#include<stdio.h>

int main(){
  int N, len, max;
  char S[101];
  
  scanf("%d", &N);
  scanf("%s", &S);
  
  max = 0; N = 0;
  while(S[len]){
    if(S[len] == 'I'){
      N++;
    } else {
      N--;
    }
    if(max < N){
      max = N;
    }
    len++;
  }
  
  printf("%d\n", max);
} 