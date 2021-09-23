#include <stdio.h>
int main(void){
char s[100005];
  int count;
  scanf("%s",s);
  for(count=0;;){
  printf("%c",s[count]);
    if(s[count+1]=='\0'||s[count+2]=='\0'){break;}
    count=count+2;
  }
  
return 0;
} 