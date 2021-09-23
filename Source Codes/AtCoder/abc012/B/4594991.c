#include<stdio.h>

int main(void)
{
  int n;
  int second;
  int minute;
  int hour;

  scanf("%d",&n);
  printf("%02d:%02d:%02d\n",n/3600,(n%3600)/60,((n%3600)%60));

  return 0;
} 