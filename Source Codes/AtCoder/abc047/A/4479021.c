#include <stdio.h>
#include <string.h>
int main(){
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  if(a == (b + c)){
    printf("Yes\n");
  }else if(b == (a + c)){
    printf("Yes\n");
  }else if(c == (a + b)){
    printf("Yes\n");
  }else{
    printf("No\n");
  }

} 