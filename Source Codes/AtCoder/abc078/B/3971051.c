#include <stdio.h>

int main(void){
  int x, y, z;
  scanf("%d%d%d", &x, &y, &z);
  int nokori = x - z;
  int ans = 0;
  int i;
  for(i = 0; nokori >= y + z; i++){
    ans++;
    nokori -= y + z;
  }
  
  printf("%d\n", ans);
  return 0;
} 