#include<stdio.h>
#include<string.h>
int main(){
  char s[100010];
  int n,c=0;
  scanf("%d",&n);
  while(n--){
    scanf(" %s",s);
    if(strcmp(s,"TAKAHASHIKUN")==0)c++;
    if(strcmp(s,"Takahashikun")==0)c++;
    if(strcmp(s,"takahashikun")==0)c++;
    if(strcmp(s,"TAKAHASHIKUN.")==0)c++;
    if(strcmp(s,"Takahashikun.")==0)c++;
    if(strcmp(s,"takahashikun.")==0)c++;
  }
  printf("%d\n",c);
  return 0;
} 