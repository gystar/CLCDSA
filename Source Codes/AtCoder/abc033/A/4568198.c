#include <stdio.h>
int main(void){
char s[10];
  scanf("%s",&s);
  if((s[0]==s[1])&&(s[0]==s[2])&&(s[0]==s[3])){printf("SAME\n");
  }
  else{printf("DIFFERENT\n");}
return 0;
} 