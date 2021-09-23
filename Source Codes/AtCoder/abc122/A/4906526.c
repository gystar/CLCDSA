#include<stdio.h>
int main(){
  char b;
  scanf("%c",&b);
  if(b=='A') printf("T");
  else if(b=='T') printf("A");
  else if(b=='C') printf("G");
  else printf("C");
  return 0;
} 