#include <stdio.h>

int
main(int argc,char *argv[])
{
  int n; int h[110] = {};
  scanf("%d", &n);
  for(int i = 1; i <= n; i++){
    scanf("%d", &h[i]);
  }
  
  int l = 0;
  
  for(int i = 0; i < 100; i++){
    for(int j = 0; j <= n ; j++){
      if(h[j] <= 0 && h[j + 1] > 0){
        l++;
      }
      h[j] -= 1;
    }
  }
  
  printf("%d\n", l);
  
  return 0;
} 