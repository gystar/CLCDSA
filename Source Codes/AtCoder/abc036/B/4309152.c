#include <stdio.h>
int main() {
  int n,i,j;
  char s[55][55];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",s[i]);
  }
  while(i--){
    for(j=0;j<n;j++){
      printf("%c",s[n-j-1][n-i-1]);
    }
    printf("\n");
  }
} 