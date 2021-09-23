#include <stdio.h>

int main(void){
  int ah,aw,bh,bw;
  scanf("%d %d %d %d",&ah,&aw,&bh,&bw);
  if(ah == bh || ah == bw)  printf("YES\n");
  else if (aw == bh || aw == bw)  printf("YES\n");
  else printf("NO\n");
  
  return 0;
} 