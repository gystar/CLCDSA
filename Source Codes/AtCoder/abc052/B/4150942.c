#include <stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  char c[n];
  scanf("%s", c);
  int x = 0;
  int max = 0;
  for(int i = 0; i < n; i++){
    if(c[i] == 'I'){
      x++;
      if(x > max) max = x;
    }else{
      x--;
    }
  }
  printf("%d\n", max);
  return 0;
} 