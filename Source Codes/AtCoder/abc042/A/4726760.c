#include<stdio.h>

int main()
{
  int a,b,c;
  scanf("%d %d %d", &a,&b,&c);
  
  if(a+b+c == 17){
    printf("YES");
  }
  else{
    printf("NO");
  }
  return 0;
} 