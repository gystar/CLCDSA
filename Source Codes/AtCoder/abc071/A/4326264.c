# include <stdio.h>
# include <stdlib.h>

int main(){
  int x,a,b;
  scanf("%d %d %d",&x,&a,&b);
  if(abs(x-a)>abs(x-b)) puts("B");
  else puts("A");

  return 0;
} 