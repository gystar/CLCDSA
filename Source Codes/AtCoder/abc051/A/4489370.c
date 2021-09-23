#include <stdio.h>
#include <string.h>
int main(){
  char s[20];

  scanf("%s", s);

  for(int cnt = 0; cnt < 19; cnt++){
    if(s[cnt] != ','){
      printf("%c", s[cnt]);
    }else{
      printf(" ");
    }

  }
  printf("\n");
  
} 