#include <stdio.h>

int main(void){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);

  if(a == c || a == d || b == c || b == d)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
} 