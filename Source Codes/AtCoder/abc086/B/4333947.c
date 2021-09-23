#include <stdio.h>

int main(){
  int a,b,c;
  scanf("%d %d",&a,&b);
  if(b<10) c = 10*a + b;
  else if(b<100) c = 100*a + b;
  else c = 1000*a + b;

  int d = sqrt(c);
  if(d*d == c) printf("Yes");
  else printf("No");

  return 0;
} 