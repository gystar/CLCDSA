#include<stdio.h>

int main(void){
  int i,j;
  char s[4][8];
  for(i=0;i<4;i++)
    for(j=0;j<8;j++)scanf("%c",&s[i][j]);
  for(i=3;i>=0;i--){
    for(j=6;j>=0;j--) printf("%c",s[i][j]);
    printf("\n");
  }
  return 0;
} 