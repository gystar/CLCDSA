#include<stdio.h>

int main(void)
{
  int p = 0, i;
  char s[4];
  
  for(i = 0 ; i < 4 ; i++)
  {
    scanf("%c", &s[i]);
    if(s[i] == '+')
      p += 1;
    else
      p -= 1;
  }
  
  printf("%d", p);
  
  return 0;
} 