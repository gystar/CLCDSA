#include<stdio.h>

int main(void){
  char s[2][3];
  int i,j;
  for(i=0;i<3;i++){
    scanf("%c",&s[0][i]);
  }
  getchar();
  for(i=0;i<3;i++){
    scanf("%c",&s[1][i]);
  }
  int flag=1;
  for(j=0;j<3;j++){
    //printf("%c %c\n",s[0][j],s[1][2-j]);
    if(s[0][j]!=s[1][2-j]) flag=0;
  }
  if(flag) printf("YES\n");
  else printf("NO\n");
  return 0;
} 