#include<stdio.h>

int main(void){
  char s[100];
  int n;
  scanf("%s",s);
  scanf("%d",&n);
  printf("%c\n",s[n-1]);
  return 0;
} 