#include <stdio.h>

int main(void){
  int n, m, temp, j, pn;
  scanf("%d", &n);
  temp = n;
  j = 100;
  pn = 0;
  for(int i = 0; i < 3; i++){
    m = temp % 10;
    pn += j * m;
    temp /= 10;
    j /= 10;
  }
  if(n == pn) printf("Yes\n");
  else printf("No\n");
  return 0;
} 