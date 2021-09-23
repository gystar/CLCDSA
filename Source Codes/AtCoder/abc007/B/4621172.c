#include <stdio.h>
#include <string.h>

int main(void){
 char s[10];
 scanf("%s",s);

 if(s[0] == 'a' && strlen(s) == 1) printf("-1\n");
 else printf("a\n");

  return 0;
} 