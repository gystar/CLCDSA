#include<stdio.h>
int main(void){
  int n, m, c, b[20], a[1000][20], i, j, k, l, o, d = 0, e = 0;

  scanf("%d %d %d", &n, &m, &c);
  for(i = 0; i < m; i++) scanf("%d", &b[i]);
  for(j = 0; j < n; j++){
    for(k = 0; k < m; k++) scanf("%d", &a[j][k]);
  }
  for(l = 0; l < n; l++){
    d = 0;
    for(o = 0; o < m; o++){
      d = d + b[o]*a[l][o];
    }
    d = d + c;
    if(d > 0) e++;
  }
  printf("%d\n", e);
  return 0;
} 