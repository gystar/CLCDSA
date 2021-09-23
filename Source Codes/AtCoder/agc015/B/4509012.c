#include<stdio.h>
#include<string.h>
int main(){
  char s[100001];
  scanf("%s",s);
  int i,n=strlen(s);
  long long ans=0;
  for(i=0;i<n;i++){
    ans+=n-1;
    if(s[i]=='U'){
      ans+=i;
    }else {
      ans+=n-1-i;
    }
  }
  printf("%lld",ans);
} 