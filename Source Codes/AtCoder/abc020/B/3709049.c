#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  char s1[100],s2[100];
  scanf("%s%s",s1,s2);
  strncat(s1,s2,3);
  printf("%ld\n",strtol(s1,NULL,10)*2);
  return 0;
} 