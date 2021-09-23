#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  char s[N][N];
  for(int i = 0;i < N;i++){
    scanf("%s",s[i]);
  }


  for(int i = 0;i < N;i++){
    for(int j = N-1;j >= 0;j--){
      printf("%c",s[j][i]);
    }
    printf("\n");
  }

  return 0;
} 