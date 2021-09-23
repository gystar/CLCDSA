#include <stdio.h>
#include <string.h>

int main(){
  char s[100010] = {};
  int flag[30] = {};//'a'+i?s[]??????s[i]==1????????s[i]==0

  scanf("%s", s);

  for(int i = 0; i < strlen(s); i++){
    flag[s[i] - 'a'] = 1;
  }

  for(int i = 0; i < 26; i++){
    if(flag[i] == 0){
      printf("%c\n", 'a' + i);
      return 0;
    }
  }

  printf("None\n");

  return 0;
} 