#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <regex.h>

int main(void) {
  int a, b, c, k;

  if(scanf("%d %d %d %d %d", &a, &b, &c, &k) == 1);

    for(int i = 0; i < k; i++) {
      if(b <= a && c <= a) {
        a *= 2;
      } else if(a <= b && c <= b) {
        b *= 2;
      } else {
        c *= 2;
      }
    }



  printf("%d", a + b + c);

  return 0;
} 