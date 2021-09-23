#include <stdio.h>

int
main(int argc, char *argv[])
{
  int N;
  scanf("%d", &N);
  
  if(N == 1){
    printf("%s\n", "Hello World");
  }
  else{
    int A, B;
    scanf("%d%d", &A, &B);
    printf("%d\n", A+B);
  }
  return 0;
} 