#include<stdio.h>
int main(){
  int h,w,i,j,d[110][110]={};
  char s[110][110];
  scanf("%d %d",&h,&w);
  for(i=0;i<h;i++)scanf("%s",s[i]);
  for(i=h;i--;){
    for(j=w;j--;){
      if(s[i][j]=='#')continue;
      if(d[i][j+1]==0&&d[i+1][j]==0&&d[i+1][j+1]==0)d[i][j]=1;
    }
  }
  /*for(i=0;i<h;i++){
    for(j=0;j<w;j++)printf("%d",d[i][j]);printf("\n");
    }//*/
  printf("%s\n",d[0][0]?"Second":"First");
  return 0;
} 