# include <stdio.h>

int main(){
  int n, k;
  int ans = 1;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++){
    ans += (ans < k)*ans + (ans >= k)*k;
  }
  printf("%d\n",ans);
  return 0;
} 