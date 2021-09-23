#include<stdio.h>
#include<string.h>

int main(void){
  char s[200],t[200];
  int n,i,j,l,r;
  gets(s);
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&l,&r);
    strcpy(t,s);
    for(j=0;j<r-l+1;j++){
      s[j+l-1]=t[r-j-1];
    }
  }
  printf("%s\n",s);
  return 0;
} 