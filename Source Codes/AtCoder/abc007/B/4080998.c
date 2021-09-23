#include <stdio.h>

int main(){
  char A[11];
  scanf("%s", A);
  if(A[0] == 'a' && A[1] == '\0'){
    printf("-1");
  }
  else{
    printf("a");
  }
  return 0;
} 