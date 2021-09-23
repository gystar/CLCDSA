#include <stdio.h>

int main(){
  int n, x;
  int i, a, y;
  unsigned long long int r;
  scanf("%d%d", &n, &x);
  r = 0;
  y = x;
  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(y < a){
      r += a - y;
      y = x - y;
    }
    else y = x - a;
  }
  printf("%llu\n", r);
  return 0;
} 