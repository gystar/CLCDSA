#include<stdio.h>
#include<string.h>
int main(){
  char o[55],e[55];
  scanf("%s%s",o,e);
  for(int i=0;i<strlen(o)+strlen(e);i++){
    if(i%2==0) printf("%c",o[i/2]);
    else printf("%c",e[i/2]);
  }
} 