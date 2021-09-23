#include <stdio.h>

int main(){
  int a, b, c, count;
  int flag = 0;
  scanf("%d %d %d", &a, &b, &c);

  count = (int)(b / a);
  if(count > c){
    count = c;
  }
  /* while(flag == 0){ */
  /*   if(b > a && count < c){ */
  /*     b -= a; */
  /*     count++; */
  /*   } */
  /*   if(b < a || count == c){ */
  /*     flag = 1; */
  /*   } */
  /* } */
  
  printf("%d\n", count);
  return 0;
} 