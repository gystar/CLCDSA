#include<stdio.h>
#include<math.h>

long min(long x,long y){
  if(x<y)
    return x;
  return y;
}

int main(){
  int n,i,j;
  long a[100000],dp[100000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
  dp[0]=0;
  dp[1]=labs(a[0]-a[1]);
  for(i=2;i<n;i++){
    dp[i]=min(dp[i-2]+labs(a[i]-a[i-2]),dp[i-1]+labs(a[i]-a[i-1]));
  }
  printf("%ld\n",dp[n-1]);
} 