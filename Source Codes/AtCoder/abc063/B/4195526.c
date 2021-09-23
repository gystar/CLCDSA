#include<stdio.h>
check(char s){
  
}

int main(){
  int len = 0, i, j;
  char s[27];
  scanf("%s", s);
  
  while(s[len]){
    len++;
  }
  for (i = 0; i < len; i++){
    for (j = i + 1; j < len; j++){
      if(s[i] == s[j]){
        printf("no\n");
        return 0;
      }
    }
  }
  
  printf("yes\n");
  return 0;
} ./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 check(char s){
 ^
