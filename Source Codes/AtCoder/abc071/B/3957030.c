#include <stdio.h>
#include <string.h>
 
int main(void){
  char s[100010];
  int a[26] = {0};
  int i;
  scanf("%s", s);
  for(i = 0; i < strlen(s); i++){
    a[s[i] - 'a']++;
  }
  for(i = 0; i < 26; i++){
    if(a[i] == 0){
      printf("%c\n", 'a' + i);
      return 0;
    }
  }
  printf("None\n");
  return 0;
} 