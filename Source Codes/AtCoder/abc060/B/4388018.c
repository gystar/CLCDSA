#include<stdio.h>

int main(void)
{
  int a, b, c;
  int i;

  scanf("%d%d%d",&a, &b, &c);
  for(i=1;i<b;i++){
    if(a * i % b == c){
      break;
    }
  }
  if(i == b)
    printf("NO\n");
  else
    printf("YES\n");

  return 0;
} 