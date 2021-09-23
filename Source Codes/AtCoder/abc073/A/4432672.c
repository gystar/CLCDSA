#include<stdio.h>
int main(void)
{
  int a;
  scanf("%d", &a);
  if(a==19 || a==29 || a==39 || a==49 || a==59 || a==69 || a==79 || a>=89){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
} 