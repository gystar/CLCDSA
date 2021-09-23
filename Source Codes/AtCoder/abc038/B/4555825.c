#include<stdio.h>

int main(void){
  int h1,w1,h2,w2;
  scanf("%d %d",&h1,&w1);
  scanf("%d %d",&h2,&w2);
  if((h1==h2 || h1==w2) || (w1==h2 || w1==w2)) printf("YES\n");
  else printf("NO\n");
  return 0;
} 