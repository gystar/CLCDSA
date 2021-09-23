#include<stdio.h>
#include<string.h>

int main(){
  char s[10];
  int i,a;
  for(i=0;i<12;i++){
    scanf("%s",s);
    if(strchr(s,'r')) a++;
  }
  printf("%d\n",a);
} 