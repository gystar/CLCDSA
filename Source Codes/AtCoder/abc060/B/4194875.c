#include<stdio.h>

int main(){
  int A, B, C, r, i;
  
  scanf("%d %d %d", &A, &B, &C);
  
  for (i = 1; i < B; i++){
    if(A*i%B == C){
      break;
    }
  }
  if(i == B){
    printf("NO\n");
  } else {
    printf("YES\n");
  }
  
  return 0;
} 