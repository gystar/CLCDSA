#include<stdio.h>
#include<string.h>

int main(){
  char s[100010];
  int n,cnt=0;
  scanf("%s",s);
  n=strlen(s);
  for(int i=1;i<n;i++)
    if(s[i]!=s[i-1])
      cnt++;
  printf("%d\n",cnt);
} 