#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

int main(int argc, char const *argv[])
{
  int n;
  scanf("%d",&n);
  if((n % 2) && (3 <= n && n <= 7))	puts("YES");
  else	puts("NO");
  return 0;
} 