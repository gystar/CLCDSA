#include <stdio.h>

int main()
{
  int n;
  int ans = 0;
  
  scanf("%d", &n);
  
  for (int i = 1; i <= n; i += 2) {
    int cnt = 0;
    
    for (int j = 1; j <= n; j++) {
      if (i % j == 0) {
        cnt++;
      }
    }
    
    if (cnt == 8) {
      ans++;
    }
  }
  
  printf("%d\n", ans);
  
  return 0;
  
} 