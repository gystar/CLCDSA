#include <stdio.h>
#include <string.h>

int main(){
  char s[51];
  scanf("%s", s);
  int i;
  int count = 0;
  
  for(i = 0; i < strlen(s); i++){
    if(s[i] == 'o' || s[i] == 'k' || s[i] == 'u'){
    }else if(s[i] == 'c'){
      count++;
    }else if(s[i] == 'h' && count == 1){
      count = 0;
    }else{
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");
  return 0;
} 