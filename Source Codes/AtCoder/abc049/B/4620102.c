#include <stdio.h>

int main(){
  int h,w;
  scanf("%d%d", &h, &w);
  char c[h][w+1];
  int i;
  for(i=0;i<h;i++){
    scanf("%s", c[i]);
  }
  for(i=0;i<h;i++){
    printf("%s\n%s\n", c[i], c[i]);
  }

  return 0;
} 