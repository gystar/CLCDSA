#include <stdio.h>

int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);

  if(a != b && b != c && c != a) printf("3\n");
  else if(a == b && b == c && c == a) printf("1\n");
  else printf("2\n");

  return 0;
} 