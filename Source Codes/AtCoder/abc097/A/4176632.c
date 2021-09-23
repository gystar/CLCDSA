#include <stdio.h>

int main(void){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);

  if(c <= a+d && a-d <= c){
    printf("Yes\n");
    return 0;
  }else if(b <= a+d && a-d <= b){
    if(c <= b+d && b-d <= c){
      printf("Yes\n");
      return 0;
    }
  }

  printf("No\n");
  return 0;
} 