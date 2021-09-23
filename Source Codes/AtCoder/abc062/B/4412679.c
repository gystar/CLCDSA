#include<stdio.h>
#include<string.h>

int main(){
  int i,j,k;
  int w,h;
  char S[256];
  scanf("%d %d",&h,&w);
  
  for(i=0;i<w+2;i++)
    printf("#");
  puts("");
  
  for(i=0;i<h;i++){
    scanf("%s",S);
    printf("#%s#\n",S);
  }

  for(i=0;i<w+2;i++)
    printf("#");
  puts("");
  return 0;
} 