#include<stdio.h>
#include<string.h>
int main(){
  int n,i,j,k,ans=0;
  char s[1010][1010];
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%s",s[i]);
  for(i=0;i<n;i++)strcpy(s[i+n],s[i]);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      for(k=0;k<n;k++){
	if(s[i+j][k]-s[i+k][j])goto END;
      }
    }
    ans+=n;
  END:;
  }
  printf("%d\n",ans);
  return 0;
} 