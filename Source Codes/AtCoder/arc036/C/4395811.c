#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef long long int int64;

const int mod=1000000007;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define POS(i,j,k) ((((i)&1)*(m+1)+(j))*(m+1)+(k))

void run(void){
  int n,m;
  scanf("%d%d",&n,&m);
  char *s=(char *)calloc(n+1,sizeof(char));
  scanf("%s",s);
  int *dp=(int *)calloc(2*(m+1)*(m+1),sizeof(int));
  dp[POS(0,0,0)]=1;
  int i,j,k;
  for(i=0;i<n;i++){
    const char c=s[i];
    memset(dp+POS(i+1,0,0),0,sizeof(int)*(m+1)*(m+1));
    for(j=0;j<=m;j++){
      for(k=0;k<=m;k++){
	int s=dp[POS(i,j,k)];
	if(c!='1' && j+1<=m){
	  dp[POS(i+1,j+1,MAX(0,k-1))]+=s;
	  dp[POS(i+1,j+1,MAX(0,k-1))]%=mod;
	}
	if(c!='0' && k+1<=m){
	  dp[POS(i+1,MAX(0,j-1),k+1)]+=s;
	  dp[POS(i+1,MAX(0,j-1),k+1)]%=mod;
	}
      }
    }
  }
  int ans=0;
  for(j=0;j<=m;j++){
    for(k=0;k<=m;k++){
      ans=(ans+dp[POS(n,j,k)])%mod;
    }
  }
  printf("%d\n",ans);
}

int main(void){
  run();
  return 0;
} 