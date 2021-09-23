#include <stdio.h>

int main(void){
  int H,W;
  scanf("%d%d",&H,&W);

  char str[H*2][W];
  char s[W];
  for(int i = 0;i < H*2;i += 2){
    scanf("%s",s);
    for(int j = 0;j < W;j++){
      str[i][j] = str[i+1][j] = s[j];
    }
  }

  for(int i = 0;i < 2*H;i++){
    for(int j = 0;j < W;j++){
      printf("%c",str[i][j]);
    }
    printf("\n");
  }
  return 0;
} 