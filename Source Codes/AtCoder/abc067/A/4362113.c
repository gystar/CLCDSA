# include <stdio.h>

int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  if(a%3==0||b%3==0||(a+b)%3==0) puts("Possible");
  else puts("Impossible");
  return 0;
} 