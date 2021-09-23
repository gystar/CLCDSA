#include <stdio.h>

int main(void){
  int a, b, i;
  char s[100];
  scanf("%d%d", &a, &b);
  scanf("%s", &s);
  int flag = 0;
  for(i = 0; i < a; i++){
    if(s[i] < '0' || '9' < s[i]) flag = 1;
  }
  if(s[a] != '-') flag = 1;
  for(i = a + 1; i < a + b + 1; i++){
    if(s[i] < '0' || '9' < s[i]) flag = 1;
  }
  
  if(flag) printf("No\n");
  else printf("Yes\n");
  return 0;
} 