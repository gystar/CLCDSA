#include<stdio.h>
#include<string.h>
int main(){
  char s[300];
  scanf("%s",s);
  int len=strlen(s);
  int i,c;
  if(len%2==1)len-=1;
  while(len>0){
    len-=2;
    c=0;
    for(i=0;i<len/2;i++){
      if(s[i]==s[(len/2)+i]){
        c++;
      }
    }
      if(c==len/2)break;
  }
  printf("%d\n",len);
  return 0;
} 