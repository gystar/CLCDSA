#include <stdio.h>
int main(){
  int n,m,c,count = 0;
  int b[21];
  scanf("%d %d %d",&n,&m,&c);
  for (int i = 0; i < m; i++) {
    scanf("%d",&b[i]);
  }

  for (int i = 0; i < n; i++) {
    int ans = c;
    for (int j = 0; j < m; j++) {
      int a;
      scanf("%d",&a);
      ans += a * b[j];
    }
    if (ans > 0) {
      count++;
    }
  }
  printf("%d\n",count);
} 