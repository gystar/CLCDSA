#include<stdio.h>

int main(){
  int N, a, b, K, P[100], C[100] = {0}, i;
  
  scanf("%d", &N);
  scanf("%d %d", &a, &b);
  C[a - 1] = C[b - 1] = 1;
  scanf("%d", &K);
  for (i = 0; i < K; i++){
    scanf("%d", &P[i]);
  }
  for (i = 0; i < K; i++){
    if(C[P[i] - 1] == 1){
      break;
    }
    C[P[i] - 1] = 1;
  }
  
  if(i == K){
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  
  return 0;
} 