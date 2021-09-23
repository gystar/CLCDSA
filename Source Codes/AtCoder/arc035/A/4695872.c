#include <stdio.h>

int main(void){

 char s[1000];
 int len=0;
 scanf("%s", s);
 for (int i = 0; ; i++) {
   if (s[i]!='\0') len++;
   else break;
 }

 for (int i = 0; i<len; i++) {
   if (s[i] != s[len-i-1]) {
   if (s[i] != '*' && s[len-i-1] != '*') {
     printf("NO\n");
     return 0;
   }
   }


 }
 printf("YES\n");

 return 0;
} 