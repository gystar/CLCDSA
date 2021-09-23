#include<stdio.h>
#include<string.h>

int main(void){
  char s[30],t[30];
  int i,j,cnt;
  scanf("%s",s);
  strcpy(t,s);
  for(i=0;i<strlen(s);i++){
    cnt=0;
    for(j=0;j<strlen(s);j++){
      if(s[i]==t[j]) cnt++;
    }
    if(cnt!=1){
      printf("no\n");
      return 0;
    }
  }
  printf("yes\n");
  return 0;
} 