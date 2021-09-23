#include <stdio.h>

int main(void){
  int n, a;
  scanf("%d" , &n);
  scanf("%d" , &a);
  while(n >= 0) n -= 500;
  n += 500;
  if(n <= a) printf("Yes\n");
  else printf("No\n");
  return 0;
} 