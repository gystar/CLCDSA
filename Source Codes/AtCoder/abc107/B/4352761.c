#include<stdio.h>
#include<string.h>

int main(){
  int h,w,i,j,b[111]={},t;
  char a[111][111];
  scanf("%d%d",&h,&w);
  t=h;
  for(i=0;i<h;i++) {
    scanf("%s",a[i]);
    if(strchr(a[i],'#')==0){
      i--;
      h--;
    }
    for(j=0;j<w;j++){
      if(a[i][j]=='#') b[j]++;
    }
  }
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      if(b[j]!=0) printf("%c",a[i][j]);
    }
    printf("\n");
  }
} 