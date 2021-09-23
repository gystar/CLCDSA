#include <stdio.h>

int main(void){
  char C[2][3];

  scanf("%s%s",C[0],C[1]);

  if(C[0][0] == C[1][2] && C[0][2] == C[1][0] && C[0][1] == C[1][1]){
    printf("YES\n");
  }else{
    printf("NO\n");
  }

  return 0;
} 