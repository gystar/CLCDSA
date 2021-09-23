#include<stdio.h>

int main(){
  int N, i, j, sum = 0, pr;
  
  for (i = 1; i <= 9; i++){
    for (j = 1; j <= 9; j++){
      sum += i*j;
    }
  }
  
  scanf("%d", &N);
  
  pr = sum - N;
  for (i = 1; i <= 9; i++){
    for (j = 1; j <= 9; j++){
      if(i*j == pr){
        printf("%d x %d\n", i, j);
      }
    }
  }
  
  return 0;
} 