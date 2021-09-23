#include <stdio.h>
int main(void){
  char s[50];
  int i;
  scanf("%s",s);
  for(i=0;i<=50;i++){
    if(s[i]=='\0') break;
  }
  if(s[i-1]=='T') printf("YES");
  else printf("NO");
  return 0;
} 