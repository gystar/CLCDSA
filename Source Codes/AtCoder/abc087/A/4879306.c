#include<stdio.h>

int main(void){
  int x,a,b;
  scanf("%d",&x );
  scanf("%d",&a );
  scanf("%d",&b );

  x -= a;
  printf("%d",x%b);
  return 0;

} 