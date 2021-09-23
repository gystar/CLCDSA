#include<stdio.h>
#include<string.h>

int main(void){
  char s[60];
  int i=0;
  scanf("%s",s);
  while(i<strlen(s)){
    if(s[i]=='o' || s[i]=='k' || s[i]=='u') i++;
    else if(s[i]=='c' && s[i+1]=='h') i+=2;
    else{
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");
  return 0;
} 