#include <stdio.h>

int main()
{
  char c = 'A';
  char d = 'B';
  char e = 'C';
  int a;
  scanf("%d",&a);
  if(a<1000){
    printf("%c%c%c",c,d,e);
  } else if (a >= 1000){
    printf("%c%c%c",c,d,e+1);
  } else {
    return 1;
  }
  return 0;
} 