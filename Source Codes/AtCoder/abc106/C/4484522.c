#include <stdio.h>
#include <string.h>

char str[128];
long long k;

int main()
{
  char ans;
  long long length;
  
  scanf("%s %lld", str, &k);
  
  length = strlen(str);
  for (long long i = 0; i < length; i++) {
    if (i == k - 1) {
      ans = str[i];
      break;
    } else if (str[i] != '1') {
      ans = str[i];
      break;
    }
  }
  
  printf("%c\n", ans);
  
  return 0;
} 