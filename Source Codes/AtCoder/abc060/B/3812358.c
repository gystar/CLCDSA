#include<stdio.h>
int A, B, C, i;
int main(){
  scanf("%d%d%d", &A, &B, &C);
  for(i=0; i<B; i++){
    if((A*i)%B == C){
      printf("YES\n");
      return 0;
    }
  }
  printf("NO\n");
} 