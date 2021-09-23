#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define ODR(ch) ((int)(ch - 'a'))

int main(void)
{
  char str[100];
  scanf("%s", str);
  int len = strlen(str), i, cnt[28];
  for(i = 0; i < 28; ++i) { cnt[i] = 0; }
  for(i = 0; i < len; ++i) { ++cnt[ODR(str[i])]; }
  bool flg = true;
  for(i = 0; i < 28; ++i) {
    if(cnt[i] % 2 != 0) { flg = false; break; }
  }
  if(flg) { printf("Yes\n"); } else { printf("No\n"); }
  return 0;
} 