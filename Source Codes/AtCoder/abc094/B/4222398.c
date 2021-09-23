#include<stdio.h>

int main(){
  int N, M, X, count0 = 0, countN = 0, a;
  scanf("%d %d %d", &N, &M, &X);
  for (int i = 0; i < M; i++){
    scanf("%d", &a);
    if(a < X){
      count0++;
    } else if(a > X){
      countN++;
    }
  }
  if(count0 < countN){
    printf("%d\n", count0);
  } else {
    printf("%d\n", countN);
  }
  
  return 0;
} 