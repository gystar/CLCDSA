#include <stdio.h>

int main(){
	int a,b;
  scanf("%d %d ",&a,&b);
  a = a > 0 ? a : -a;
  b = b > 0 ? b : -b;
  if(a==b)printf("Draw\n");
  else if(a > b) printf("Bug\n");
  else printf("Ant\n");
  return 0;
} 