#include<stdio.h>

int main() {
  int n, m;
  int x, y;
  int i, j;
  int flag = 1;
  int sw[100000] = {};
  scanf("%d %d", &n, &m);
  for (i=0; i < m; i = i+1){
    scanf("%d %d", &x, &y);
    sw[x] = sw[x] + 1;
    sw[y] = sw[y] + 1;
  }
  for (i = 0; i < 100000; i = i+1){
    if (sw[i] % 2 == 1){
      flag = 0;
      break;
    }
  }
  if (flag == 1){
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
} 