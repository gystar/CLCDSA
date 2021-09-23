#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  int N,hour,minute,second;
  scanf("%d",&N);
  second = N % 60;
  minute = (N / 60) % 60;
  hour = (N / 3600) % 60;
  printf("%02d:%02d:%02d\n",hour,minute,second);
  return 0;
} 