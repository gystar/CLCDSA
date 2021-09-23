#include <stdio.h>

int main(){
  int A, B, C;

  scanf("%d%d%d", &A, &B, &C);

  for(int i = 1; i <= B; i++){
    if((A*i)%B == C){
      printf("YES\n");
      return 0;
    }
  }

  printf("NO\n");
  
  return 0;
}

/*
???? A, B, C ????
  A*i = C (mod B)
??????? i (1 <= i <= B) ???????
*/ 