# include <stdio.h>
# include <stdlib.h>

int main(){
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(abs(c-a)<=d) puts("Yes");
  else if(abs(b-a)<=d&&abs(c-b)<=d) puts("Yes");
  else puts("No");


  return 0;
} 