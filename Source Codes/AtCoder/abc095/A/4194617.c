#include <stdio.h>
int main(void){
  char ox;
  int price=700;
  scanf("%c",&ox);
  if(ox=='o')price+=100;
  scanf("%c",&ox);
  if(ox=='o')price+=100;
  scanf("%c",&ox);
  if(ox=='o')price+=100;
  printf("%d",price);
} 