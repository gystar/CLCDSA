#include<stdio.h>
int main(){
  char s[111111];
  int n,l,i,ans=0,t=1;
  scanf("%d%d%s",&n,&l,s);
  for(i=0;i<n;i++){
    if(s[i]=='+'){
      if(t==l){
        t=1;
        ans++;
      }
      else t++;
    }
    else if(s[i]=='-'){
      t--;
    }
  }
  printf("%d\n",ans);
} 