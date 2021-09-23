#include <stdio.h>

int main(void)
{
  char s[4];
  scanf("%s",s);
  int i,sum=0;
  for(i=0;i<=3;i++){if(s[i]=='+'){sum++;}
                    else{sum--;}}
    printf("%d",sum);
  return 0;} 