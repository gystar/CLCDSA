#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if ((abs(b - a) <= d && abs(c - b) <= d) || (abs(c - a) <= d))	printf("Yes\n");
  else printf("No\n");
  return 0;
} 