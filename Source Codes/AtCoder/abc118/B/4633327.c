#include <stdio.h>

int main(){
  int n,m;
  scanf("%d%d", &n, &m);
  int i;
  int c[m];
  for(i=0;i<m;i++){
    c[i] = 1;
  }
  for(i=0;i<n;i++){
    int tmp[m];
    int j;
    for(j=0;j<m;j++){
      tmp[j] = 0;
    }
    int k;
    scanf("%d", &k);
    for(j=0;j<k;j++){
      int a;
      scanf("%d", &a);
      tmp[a-1] = 1;
    }
    for(j=0;j<m;j++){
      c[j] = tmp[j] * c[j];
    }
  }
  int ans = 0;
  for(i=0;i<m;i++){
    ans += c[i];
  }
  printf("%d\n", ans);
  return 0;
} 