#include <stdio.h>

int main(){
  int H, W, h_, w_;
  scanf("%d %d", &H, &W);
  scanf("%d %d", &h_, &w_);
  printf("%d", H * W - H * w_ - W * h_ + h_ * w_);
  return 0;
} 