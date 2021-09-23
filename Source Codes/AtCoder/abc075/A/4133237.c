#include "stdio.h"
 
int main()
{
  int A, B, C;
  scanf("%4i %4i %4i%*[^\n]", &A, &B, &C);
  getchar();
  if (A == B) printf("%i\n", C);
  else if (A == C) printf("%i\n", B);
  else printf("%i\n", A);
  return 0;
} 