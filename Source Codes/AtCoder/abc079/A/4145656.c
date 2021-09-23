#include <stdio.h>

int main(void){
  int n, a[4];
  int flag = 1;
  scanf("%d", &n);
  for(int i = 0; i < 4; i++){
    a[i] = n % 10;
    n /= 10;
  }

  if(a[0] == a[1] && a[1] == a[2]) printf("Yes\n");
  else if(a[1] == a[2] && a[2] == a[3]) printf("Yes\n");
  else printf("No\n");
  return 0;
} 