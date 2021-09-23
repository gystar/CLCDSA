#include <stdio.h>

int main(void) {
  int n,x,a[100],i,j,min,zah,ans = 0;
  scanf("%d %d",&n,&x);
  for (i = 0;i < n;i++) {
      scanf("%d",&a[i]);
  }
  for (i = 0;i < n;i++) {
      min = 2000000000;
      for (j = 0;j < n;j++) {
          if (a[j] < min) {
              min = a[j];
              zah = j;
          }
      }
      a[zah] = 2000000000;
      if (i == n - 1) {
          if (min == x) ans++;
      } else {
          if (min > x) {
              break;
          } else {
              ans++;
              x -= min;
          }
      }
  }
  printf("%d\n",ans);
  return 0;
} 