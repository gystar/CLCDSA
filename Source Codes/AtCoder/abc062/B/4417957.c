#include<stdio.h>
#include<string.h>

int main(void){
  int h,w,i,j,k,l;
  scanf("%d %d",&h,&w);
  char s[h][w+1];
  for(i=0;i<h;i++){
    scanf("%s",s[i]);
  }
  for(i=0;i<w+2;i++){
    printf("#");
  }
  printf("\n");
  for(i=0;i<h;i++){
    printf("#");
    printf("%s",s[i]);
    printf("#\n");
  }
  for(i=0;i<w+2;i++){
    printf("#");
  }
  printf("\n");
  return 0;
} 