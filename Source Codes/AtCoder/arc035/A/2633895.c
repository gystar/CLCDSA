#include<stdio.h>
#include<string.h>

int main(){
  int n,i,flag=1;
  char s[1010];
  scanf("%s",s);
  n=strlen(s);
  for(i=0;i<n/2;i++){
    if(s[i]==s[n-1-i]||s[i]=='*'||s[n-1-i]=='*');
    else
      flag=0;
  }
  if(flag)
    printf("YES\n");
  else
    printf("NO\n");
} 