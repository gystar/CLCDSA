#include<stdio.h>

int main(){
  char s[11];scanf("%s",s);
  char ans[11]={0};
  int i,count=0;
  for(i=0;s[i]!=0;i++){
  if(s[i]=='0'||s[i]=='1')ans[count++]=s[i];
  if(s[i]=='B'&&count>0){
  ans[count-1]=0;count--;
  }
  }
  printf("%s\n",ans);
  return 0;
} 