#include<stdio.h>
int main(void){
  char s,t;
  scanf("%c %c",&s,&t);
  if(s=='H'){
    if(t=='H') printf("H\n");
    else printf("D\n");
  }else{
    if(t=='H') printf("D\n");
    else printf("H\n");
  }
  return 0;
} 