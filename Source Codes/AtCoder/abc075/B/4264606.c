#include<stdio.h>
int main(){
  int h,w,i,j;
  char s[51][51];
  scanf("%d%d",&h,&w);
  for(i=0;i<h;i++){
    scanf("%s",s[i]);
  }
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      if(s[i][j]=='.'){
        s[i][j]=48;
        for(int k=0;k<3;k++){
          for(int l=0;l<3;l++){
            s[i][j]+=s[i-1+k][j-1+l]=='#';
          }
        }
      }
    }
  }
  for(i=0;i<h;i++){
    printf("%s\n",s[i]);
  }
} 