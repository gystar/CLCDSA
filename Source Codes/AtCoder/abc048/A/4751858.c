#include <stdio.h>
int main()
{
  char a[101], s[101], b[101];
  scanf("%s %s %s", a,s,b);
  char out[4];
  snprintf(out,4,"%c%c%c", a[0],s[0],b[0]);
  printf("%s",out);
} 