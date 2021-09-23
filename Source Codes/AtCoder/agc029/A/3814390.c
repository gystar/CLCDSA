#include <stdio.h>
#include <string.h>

int main(void)
{

  char str[200001];
  long long int Bcount = 0;
  long long int ans = 0;

  scanf("%s", str);

  for (long long int i = 0; i < strlen(str); i++)
  {
    if (str[i] == 'B')
    {
      Bcount++;
    }
    else
    {
      ans += Bcount;
    }
  }
  printf("%lld", ans);

  return 0;
} 