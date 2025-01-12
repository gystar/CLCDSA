#include <stdio.h>

char dp[100000];

int main(){
  int n, m;
  scanf("%d%d", &n, &m);
  for(int i=0;i<m;i++){
    int a, b;
    scanf("%d%d", &a, &b);
    dp[a-1] ^= 1;
    dp[b-1] ^= 1;
  }
  for(int i = 0; i<n; i++){
    if(dp[i]){
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  return 0;
} 