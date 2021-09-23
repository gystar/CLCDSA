#include <stdio.h>

int min(int a,int b){if(a<b){return a;}return b;}

int main(void){
  int n, m, x, i;
  scanf("%d%d%d", &n, &m, &x);
  int ary[100] = {0};
  int left = 0;
  int right = 0;
  for(i = 0; i < m; i++){
    int ai;
    scanf("%d", &ai);
    ary[ai]++;
  }
  
  for(i = 0; i < x; i++){
    left += ary[i];
  }
  for(i = x + 1; i < n; i++){
    right += ary[i];
  }
  printf("%d\n", min(left, right));
  return 0;
} 