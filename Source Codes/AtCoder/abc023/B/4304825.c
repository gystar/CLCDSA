#include<stdio.h>

int main(){
  int n,i;
  char s[222];
  scanf("%d%s",&n,s);
  for(i=0;i<=n/2;i++){
    if(i%3==0){
      if(s[n/2-i]!='b'||s[n/2+i]!='b'){
        i=0;
        break;
      }
    }
    else if(i%3==1){
      if(s[n/2-i]!='a'||s[n/2+i]!='c'){
        i=0;
        break;
      }
    }
    else {
      if(s[n/2-i]!='c'||s[n/2+i]!='a'){
        i=0;
        break;
      }
    }
  }
  printf("%d\n",i-1);
} 