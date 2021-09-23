#include<stdio.h>
int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if(a+b >= c-1){
    printf("%d", b+c);
  }
  else{
    if(a<c){
      if(c-a-1 >= b){
        printf("%d", a+1+2*b);
      }
      else{
        printf("%d", a+1+b);
      }
    }
  }
  return 0;
} 