#include <stdio.h>
#include <string.h>
int main()
{
  char A[51], B[51];
  scanf("%s %s", A, B);
  if (strlen(A) > strlen(B)) {
    printf("%s\n", A);
  } else {
    printf("%s\n", B);
  }
  return 0;
} 