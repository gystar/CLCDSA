#include <stdio.h>
int main(void){
  int a, b, c, d;
  int temp1, temp2;
  int ans;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  temp1 = (a < c) ? c : a;
  temp2 = (b < d) ? b : d;
  if(temp1 > temp2){
    ans = 0;
  }else{
    ans = temp2 - temp1;
  }
  printf("%d\n", ans);
  return 0;
} 