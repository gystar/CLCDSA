#include<stdio.h>

int main(){
  int N, l, r, f;
  
  scanf("%d", &N);
  
  for (int i = 0; i < N; i++){
    scanf("%d %d", &l, &r);
    f += r - l + 1;
  }
  
  printf("%d\n", f);
  
  return 0;
} 