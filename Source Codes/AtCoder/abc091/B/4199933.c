#include<stdio.h>
#include<string.h>

int main(void){
  int i,j,n,m,max=0,ans;
  scanf("%d",&n);
  char s[n][10];
  for(i=0;i<n;i++){
    scanf("%s",s[i]);
  }
  scanf("%d",&m);
  char t[m][10];
  for(i=0;i<m;i++){
    scanf("%s",t[i]);
  }
  for(i=0;i<n;i++){
    ans=0;
    for(j=0;j<n;j++){
      if(strcmp(s[i],s[j])==0) ans++;
    }
    for(j=0;j<m;j++){
      if(strcmp(s[i],t[j])==0) ans--;
    }
    if(max<ans) max = ans;
  }
  printf("%d\n",max);
  return 0;
} 