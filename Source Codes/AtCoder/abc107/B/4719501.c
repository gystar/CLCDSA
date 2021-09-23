#include<stdio.h>
short h, w, i, j;
char m[100][101];
char row[100], col[100];
int main(void){
  scanf("%hd%hd", &h, &w);
  register char f;
  for(i=0; i<h; i++){
    scanf("%s", m[i]);
    for(j=0; j<w; j++){
      if(m[i][j]=='#'){
        row[i]=1;
        col[j]=1;
      }
    }
  }
  for(i=0; i<h; i++){
    for(j=0; j<w; j++){
      if(row[i]==1 && col[j]==1){
        putchar(m[i][j]);
      }
    }
    if(row[i]==1){
      putchar(10);
    }
  }
} 