#include<stdio.h>
#include<string.h>

int main(void){
  int i;
  char s[100000];
  scanf("%s",s);
  for(i=0;i<(strlen(s)+1)/2;i++){
    printf("%c",s[2*i]);
  }
  printf("\n");
  return 0;
} 