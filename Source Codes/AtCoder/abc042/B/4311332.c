#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char s[111][111];
  int n,l,i;
  scanf("%d%d",&n,&i);
  for(i=0;i<n;i++){
    scanf("%s",s[i]);
  }
  qsort(s,n,sizeof(s[0]),strcmp);
  for(i=0;i<n;i++){
    printf("%s",s[i]);
  }
} 