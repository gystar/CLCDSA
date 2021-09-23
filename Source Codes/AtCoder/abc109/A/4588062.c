#include <stdio.h>
int main() {
  int A,B,ans;
  scanf("%d %d",&A,&B);
  ans = A*B;
  if (ans % 2 != 0) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
} 