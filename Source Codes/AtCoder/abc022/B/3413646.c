#include <stdio.h>

int f[100010];
int main(void){
  int i, n, a;
  int count = 0;
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    scanf("%d", &a);
    if(f[a] == 1) count++;
    f[a] = 1;
  }
  
  printf("%d\n", count);
  return 0;
} 