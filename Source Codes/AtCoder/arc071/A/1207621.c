#include<stdio.h>
int main(){
  int n,i,j,min,c[60][30]={};
  char s[60];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",s);
    for(j=0;s[j];j++)c[i][s[j]-'a']++;
  }
  for(i=0;i<26;i++){
    min=1000;
    for(j=0;j<n;j++){
      if(min>c[j][i])min=c[j][i];
    }
    for(j=0;j<min;j++)printf("%c",i+'a');
  }
  printf("\n");
  return 0;
} 