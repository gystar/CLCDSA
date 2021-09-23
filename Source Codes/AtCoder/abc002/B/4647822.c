#include <stdio.h>

int main(void) {
  char W[31];
  scanf("%s", W);

  char P[31];
  int dst = 0;
  for(int i = 0; i < 31; i++) {
    if(W[i] != 'a' && W[i] != 'i' &&
       W[i] != 'u' && W[i] != 'e' && W[i] != 'o')
      P[dst++] = W[i];
    if(W[i] == 0) break;
  }
  printf("%s\n", P);
  
  return 0;
} 