#include<stdio.h>

int main(){
  char s[12];
  int a,b,i,ans=1;
  scanf("%d%d%s",&a,&b,s);
  for(i=0;i<a+b+1;i++){
    if(i==a){
      if(s[i]!='-'){
        ans=0;
        break;
      }
    }
    else{
      if(s[i]=='-'){
        ans=0;
        break;
      }
    }
  }
  puts(ans?"Yes":"No");
} 