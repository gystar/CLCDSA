#include<stdio.h>

int main(){
  int n,d[101],min=100,i;
  char s[101],ans[201];
  scanf("%d",&n);
  scanf("%s",s);
  d[0]=0;
  for(i=0;i<n;i++){
    if(s[i]=='(')
      d[i+1]=d[i]+1;
    else
      d[i+1]=d[i]-1;
    if(min>d[i+1])
      min=d[i+1];
  }
  for(i=0;i<-min;i++)
    printf("(");
  printf("%s",s);
  for(i=0;i<d[n]-min;i++)
    printf(")");
  if(min==1)
    printf(")");
  printf("\n");
} 