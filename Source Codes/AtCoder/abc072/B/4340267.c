#include<stdio.h>
#include<string.h>

int main(){
char s[1000000];
  int i,j,k;
  
  scanf("%s",s);
  for(i=0;i<strlen(s);i++){
    if(i%2 == 0)
      printf("%c",s[i]);
  }
  puts("");
  return 0;
} 