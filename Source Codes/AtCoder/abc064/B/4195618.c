#include<stdio.h>

int main(){
  int N, a, max = 0, min = 1001, i;
  
  scanf("%d", &N);
  
  for (i = 0; i < N; i++){
    scanf("%d", &a);
    if(a > max){
      max = a;
    }
    if(a < min){
      min = a;
    }
  }
  
  printf("%d\n", max - min);
  
  return 0;
} 