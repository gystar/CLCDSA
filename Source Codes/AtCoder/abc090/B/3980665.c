#include <stdio.h>

int main(void){
  int a, b;
  scanf("%d%d", &a, &b);
  int i;
  int count = 0;
  for(i = a; i <= b; i++){
    if(((i / 10000) % 10) == i % 10){
      if((i / 1000) % 10 == (i / 10) % 10){
        count++;
      }
    }
  }
  printf("%d\n", count);
  return 0;
} 