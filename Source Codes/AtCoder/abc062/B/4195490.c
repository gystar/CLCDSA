#include<stdio.h>
 
int main(){
  int H, W, i;
  char s[100][101];
  
  scanf("%d %d", &H, &W);
  for (i = 0; i < H; i++){
    scanf("%s", s[i]);
  }
  for (i = 0; i <= W + 1; i++){
    printf("#");
  }
  printf("\n");
  for (i = 0; i < H; i++){
    printf("#%s#\n", s[i]);
  }
  for (i = 0; i <= W + 1; i++){
    printf("#");
  }
  printf("\n");
  
  return 0;
} 