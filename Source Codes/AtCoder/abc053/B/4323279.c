#include<stdio.h>
#include<string.h>
int main(){
  char s[222222];
  scanf("%s",s);
  printf("%d",strrchr(s,'Z')-strchr(s,'A')+1);
} 