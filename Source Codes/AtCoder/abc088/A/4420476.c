#include <stdio.h>
int main(void){
  int n,a;
  scanf("%d%d",&n,&a);
  if(n%500>a) printf("No\n");
  else printf("Yes\n");
  return 0;
} 