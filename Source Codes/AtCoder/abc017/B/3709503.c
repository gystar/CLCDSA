#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


int main(void) {
  char x[55];
  scanf("%s",x);
  for(int i=0; i<strlen(x); i++) {
    if(x[i]=='o' || x[i]=='k' || x[i]=='u');
    else if(x[i]=='c' && x[i+1]=='h') i++;
    else {
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  return 0;
} 