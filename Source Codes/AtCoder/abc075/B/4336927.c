#include <stdio.h>
int main(void){
  int h,w;
  scanf("%d%d",&h,&w);
  int i,j;
  char s[51][51];
  for(i=0;i<h;i++){
    scanf("%s",s[i]);
  }
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      if(s[i][j]=='#') printf("#");
      else{
        int count=0;
        if(s[i-1][j-1]=='#') count++;
        if(s[i-1][j]=='#') count++;
        if(s[i][j-1]=='#') count++;
        if(s[i+1][j-1]=='#') count++;
        if(s[i+1][j]=='#') count++;
        if(s[i+1][j+1]=='#') count++;
        if(s[i][j+1]=='#') count++;
        if(s[i-1][j+1]=='#') count++;
        printf("%d",count);
      }
    }
    puts("");
  }
  return 0;
} 