#include<stdio.h>
#include<stdlib.h>
int MAX(int a,int b){return a<b?b:a;}
int main(){
  int n,a,b,i,d[100010];
  scanf("%d %d %d",&n,&a,&b);
  for(i=0;i<n;i++)scanf("%d",&d[i]);
  if(n==1){
    printf("%d\n",abs(d[0]-b));
    return 0;
  }
  printf("%d\n",MAX(abs(d[n-1]-b),abs(d[n-2]-d[n-1])));
  return 0;
} 