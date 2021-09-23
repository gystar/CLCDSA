#include<stdio.h>

int main(void){
  char s[3][3];
  int i,j;
  for(i=0;i<3;i++){
    scanf("%s",s[i]);
    printf("%c",s[i][i]);
  }
  printf("\n");
  return 0;
} 