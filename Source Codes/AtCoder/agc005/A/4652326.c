#include <stdio.h>
#include <string.h>

int main(void) {
  char X[200010];
  int i, len, s, t, u;
  scanf("%s", &X);
  len = strlen(X);
  
  s = 0; u = 0;
  for (i=0;i<len;i++) {
    if (X[i] == 'S') s++;
    else if (s>0) s--;
    else u++;
  }
  u += s;
  printf("%d\n", u);
  return 0;
} 