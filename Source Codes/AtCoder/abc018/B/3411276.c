#include <stdio.h>

int main(){
  char s[101];
  int n, i, j;
  scanf("%s", s);
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    int l, r;
    scanf("%d%d", &l, &r);
    for(j = 0; j < (r - l + 1) / 2; j++){
      int a = l + j - 1;
      int b = r - j - 1;
      char tmp = s[a];
      s[a] = s[b];
      s[b] = tmp;
    }
  }
  
  printf("%s\n", s);
  return 0;
} 