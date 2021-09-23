#include <stdio.h>

int p[110];

int main(void){
  int n, i;
  scanf("%d", &n);
  int a, b;
  scanf("%d %d", &a, &b);
  
  for(i = 0; i < 110; i++){
    p[i] = 0;
  }
  
  p[a] = 1;
  p[b] = 1;
  
  int k;
  scanf("%d", &k);
  
  for(i = 0; i < k; i++){
    int x;
    scanf("%d", &x);
    if(p[x] == 1){
      printf("NO\n");
      return 0;
    }
    p[x] = 1;
  }
  
  printf("YES\n");
  
  return 0;
} 