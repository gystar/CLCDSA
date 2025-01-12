#include<stdio.h>
#include<stdlib.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

void run(void){
  int n,m;
  scanf("%d%d",&n,&m);
  int *dp=(int *)calloc(m+2,sizeof(int));
  int sum=0;
  while(n--){
    int l,r,s;
    scanf("%d%d%d",&l,&r,&s);
    sum+=s;
    dp[l]+=s;
    dp[r+1]-=s;
  }
  int max=0;
  for(int i=1;i<=m;i++){
    dp[i]+=dp[i-1];
    max=MAX(max,sum-dp[i]);
  }
  printf("%d\n",max);
}

int main(void){
  run();
  return 0;
} 