#include <stdio.h>

int main(){
  int n, y;
  int result[3] = {-1, -1, -1};
  int p0, p1, p2;
  scanf("%d %d", &n, &y);
  if(n < 1 || 2000 < n || y < 1000 || 20000000 < y || (y%1000))
    return 1;

  for(p0 = 0; p0 <= n + 1; p0++){
    for(p1 = 0; p1 <= n - p0; p1++){
      p2 = n - p1 - p0;
      if((p0 * 10000 + p1 * 5000 + p2 * 1000) == y){
        result[0] = p0;
        result[1] = p1;
        result[2] = p2; 
      }   
    }
  }

  if(0 <= result[0])
    printf("%d %d %d\n", result[0], result[1], result[2]);
  else
    printf("%d %d %d\n", -1, -1, -1);
  return 0;
} 