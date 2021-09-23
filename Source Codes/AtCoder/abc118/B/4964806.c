#include <stdio.h>

int main(){
  int n, m, i, j, l;
  int count = 0;
  int aa[30] = {};

  scanf("%d %d", &n, &m);

  for(i = 0; i < n; i++){
    int k; scanf("%d", &k);
    /* printf("k_%d ... %d\n", i, k); */
    for(j = 0; j < k; j++){
      int a; scanf("%d", &a);
      /* printf("a_%d ... %d\n", j, a); */
      a--;
      aa[a]++;
      /* printf("aa[%d] = %d.\n", a, aa[a]); */
    }
  }

  for(l = 0; l < m; l++){
    if(aa[l] == n) count++;
  }

  printf("%d\n", count);

  return 0;
} 