#include <stdio.h>

int main(void){
  int len, n;
  scanf("%d%d", &len, &n);
  int a[101] = {0};
  
  for(int i = 0; i < n; i++){
    int l, r, t;
    scanf("%d%d%d", &l, &r, &t);
    for(int j = l - 1; j < r; j++){
      a[j] = t;
    }
  }
  
  for(int i = 0; i < len; i++){
    printf("%d\n", a[i]);
  }
  
  return 0;
} 