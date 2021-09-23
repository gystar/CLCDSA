#include <stdio.h>

int main(void){
  int a, b, c, d;
  scanf("%d %d %d", &a, &b, &c);
  int flag = 0;
  for(int i = 0; i < b; i++){
    d = a % b;
    d *= i;
    if(d % b == c) flag = 1;
  }
  if(flag) printf("YES\n");
  else printf("NO\n");
  return 0;
} 