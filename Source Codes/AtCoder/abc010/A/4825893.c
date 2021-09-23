#include <stdio.h>
#include <string.h>

int main(){
  char a[15];
  char *b ="pp";
  scanf("%s",a);
  strcat(a,b);
  printf("%s\n",a);
  return 0;
} 