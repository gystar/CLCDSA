#include <stdio.h>
#define MAX 200000
int main(void){
  long long a,b,i;
  char s[MAX + 2];
  scanf("%s",s);
  for(i = a = b = 0;i < MAX && s[i] != '\0';i++){
    a += (s[i] == 'W')*(b += (s[i] == 'B'));
  }
  printf("%lld\n",a);
  return 0;
} 