#include<stdio.h>
#include<math.h>

int main(){
  int W, a, b, d;
  scanf("%d %d %d", &W, &a, &b);
  
  d = (fabs(b - (a + W)) <= (fabs)(a - (b + W))) ? (b - (a + W)):(a - (b + W));
  
  if(d > 0){
    printf("%d\n", d);
  } else {
    printf("0\n");
  }
  
  return 0;
} 