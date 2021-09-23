#include<stdio.h>
#include<string.h>

int main(){
  int a[26]={},i;
  char s[30];
  scanf("%s",s);
  for(i=0;i<strlen(s);i++){
    a[s[i]-97]++;
    if(a[s[i]-97]>1){
      i=0;
      break;
    }
  }
  puts(i?"yes":"no");
} 