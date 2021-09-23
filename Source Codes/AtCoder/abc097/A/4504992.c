#include<stdio.h>
int main(void)
{
  int a, b, c, n;
  scanf("%d %d %d %d", &a, &b, &c, &n);
  if(abs(b-a)<=n&&abs(c-b)<=n||abs(c-a)<=n){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
} 