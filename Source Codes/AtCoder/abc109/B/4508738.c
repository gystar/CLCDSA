#include <stdio.h>
#include <string.h>

int main(void) {
  int n, i, j; scanf("%d", &n);
  int flag = 1;
  char str[n+1][13];
  for(i = 0; i < n; ++i) {
    scanf("%s", str[i]);
  }
  
  for(i = 1; i < n; ++i) {
    //printf("%c %c\n", str[i-1][strlen(str[i-1])-1], str[i][0]);
    if(str[i-1][strlen(str[i-1])-1] != str[i][0]) { flag = 0; break; }
    for(j = 0; j < i; ++j) {
      if(strcmp(str[j], str[i]) == 0) { flag = 0; break; }
    }
  }
  
  if(flag) { printf("Yes\n"); } else { printf("No\n"); }
  return 0;
} 