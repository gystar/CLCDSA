#include<stdio.h>

int main(){
  int i,pCount=0;
  char s[100001];

  scanf("%s",s);
  for(i=1;s[i]!='\0';++i){
    if(s[i]=='p') ++pCount;
  }
  i=i/2;
  printf("%d\n",i-pCount);

  return 0;
} 