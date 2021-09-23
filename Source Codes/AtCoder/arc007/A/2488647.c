#include<stdio.h>
#include<string.h>
int main(void){
  int i,l;
  char AA;
  char x[50];

  scanf("%c %s" ,&AA,x);
  l = strlen(x);

  for(i = 0; i < l; i++){
    if(x[i] != AA){
      printf("%c",x[i]);
    }
  }
  printf("\n");
  return 0;
} 