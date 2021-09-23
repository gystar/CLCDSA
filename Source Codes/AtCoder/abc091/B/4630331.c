#include <stdio.h>
#include <string.h>
int main(void){
  int n,m,i,j,sum,max=0;
  char s[101][11],t[101][11];
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%s",s[i]);
  scanf("%d",&m);
  for(i=0;i<m;i++) scanf("%s",t[i]);
  for(i=0;i<n;i++){
    sum=0;
    for(j=0;j<n;j++){
      if(strcmp(s[i],s[j])==0) sum++;
    }
    for(j=0;j<m;j++){
      if(strcmp(s[i],t[j])==0) sum--;
    }
    if(max<sum) max=sum;
  }
  printf("%d",max);
  return 0;
} 