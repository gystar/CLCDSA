#include<stdio.h>
int MIN(int a,int b){return a<b?a:b;}
int MAX(int a,int b){return a<b?b:a;}
int main(){
  int n,m=1e9,i,j,a,b,d[5];
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&d[i]);
  for(i=0;i<(1<<n);i++){
    a=b=0;
    for(j=0;j<n;j++){
      if(i&(1<<j))a+=d[j];
      else        b+=d[j];
    }
    //printf("%d %d\n",a,b);
    m=MIN(MAX(a,b),m);
  }
  printf("%d\n",m);
  return 0;
} 