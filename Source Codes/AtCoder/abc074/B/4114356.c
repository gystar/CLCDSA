# include <stdio.h>

int main(){
  int n, k;
  int ans = 0;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++){
    int pos_x;
    scanf("%d", &pos_x);
    ans += (pos_x*2 < k)*2*pos_x + (pos_x*2 >= k)*2*(k-pos_x);
  }
  printf("%d\n",ans);
  return 0;
} 