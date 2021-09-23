#include <stdio.h>
int main(void){
char s[10];
  scanf("%s",&s);
  if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]){printf("Yes");return 0;}
    if(s[0]==s[1]&&s[1]==s[2]){printf("Yes");return 0;}
    if(s[1]==s[2]&&s[2]==s[3]){printf("Yes");return 0;}
  printf("No");
              
return 0;
} 