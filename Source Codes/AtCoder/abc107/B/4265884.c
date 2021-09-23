#include<stdio.h>
#include<string.h>
int main(){
  int i,j,k;
  
  int H,W;
  
  scanf("%d %d",&H,&W);
  
  char str[H][W];
  int w[W],h[H];
  for(i = 0;i < H;i++){
    scanf("%s",str[i]);
    h[i] = 0;
  }
  
  for(i=0;i<W;i++)
    w[i]=0;
  
  
  for(i=0;i<W;i++){
    for(j=0;j<H;j++){
      if(str[j][i] == '#'){
        w[i] = 1;
        break;
      }
    }
  }
  
  for(i=0;i<H;i++){
    for(j=0;j<W;j++){
      if(str[i][j] == '#'){
        h[i] = 1;
        break;
      }
    }
  }
      
  for(i=0;i<H;i++){
    for(j=0;j<W;j++){
      if(w[j] == 1 && h[i] == 1)
        printf("%c",str[i][j]);
    }
    if(h[i] != 0)
    puts("");
  }
  
  return 0;
} 