#include<stdio.h>
#include<string.h>
int main(){
   char s[31];
   int i;
   scanf("%s",s);
   for(i=0;i<strlen(s);i++){
      if(s[i]=='a' || s[i]=='i' || s[i]=='u' || s[i]=='e' || s[i]=='o');
      else printf("%c",s[i]);
   }
   printf("\n");
} 