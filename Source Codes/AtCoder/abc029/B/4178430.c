#include<stdio.h>

int main(){
  int len, i, count = 0;
  char s[12][11];
  
  for (i = 0; i < 12; i++){
    scanf("%s", s[i]);
  }
  
  for (i = 0; i < 12; i++){
    len = 0;
    while(s[i][len]){
      if(s[i][len] == 'r'){
        count++;
        len++;
        break;
      }
      len++;
    }
  }
  
  printf("%d\n", count);
  
  return 0;
} 