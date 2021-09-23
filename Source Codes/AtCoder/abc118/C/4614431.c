#include <stdio.h>

int gcd(int a, int b) {
  int c;
  if (a < b) {
    a+=b;
    b=a-b;
    a-=b;
  }
  while (b != 0) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}


int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  int i;
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  int ans = a[0];
  for(i=1;i<n;i++){
    ans = gcd(ans, a[i]);
  }
  printf("%d\n", ans);
  return 0;
} 