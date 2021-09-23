#include<stdio.h>
int main(void){
  int H, W, h, w, Hh, Ww, a;
  
  scanf("%d %d", &H, &W);
  scanf("%d %d", &h, &w);
  Hh = H - h;
  Ww = W - w;
  a = Hh * Ww;
  printf("%d\n", a);
  return 0;
} 