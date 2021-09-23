#include <stdio.h>

int main(void){
  int l, h;
  scanf("%d %d", &l, &h);
  int n;
  scanf("%d", &n);
  int i;
  
  for(i = 0; i < n; i++){
    int a;
    scanf("%d", &a);
    if(a < l) printf("%d\n", l - a);
    else if(h < a) printf("-1\n");
    else printf("0\n");
  }
  
  return 0;
} 