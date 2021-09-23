#include <stdio.h>
#include <string.h>
int main(){
  int a, b;
  char c[2];

  scanf("%d %c %d", &a, c, &b);

  if(c[0] == '+' ){
    printf("%d\n", a + b);
  }else if(c[0] == '-'){
    printf("%d\n", a - b);
  }

} 