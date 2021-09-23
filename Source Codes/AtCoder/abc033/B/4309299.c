#include<stdio.h>
int main(){
  int n,p,m=0,i,t,sum=0;
  char s[1111][22];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s%d",s[i],&p);
    sum+=p;
    if(m<p){
      m=p;
      t=i;
    }
  }
  printf("%s\n",m*2>sum?s[t]:"atcoder");
} 