#include<stdio.h>
#include<string.h>
int main(){
  int n,f[30]={},cnt=0;
  char s[100010];
  scanf("%s",s);
  n=strlen(s);
  for(int i=0;i<n;i++)
    f[s[i]-'a']=1;
  for(int i=0;i<30;i++)
    cnt+=f[i];
  if((n%2==1&&s[0]==s[n-1])||(n%2==0&&s[0]!=s[n-1])||cnt==2)
    printf("Second\n");
  else
    printf("First\n");
} 