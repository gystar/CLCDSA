#include<stdio.h>
#include<math.h>

int main(){
  int n,i;
  long long int a,sum[200000]={},min=200000000000000;
  scanf("%d",&n);
  scanf("%lld",&a);
  sum[0]=a;
  for(i=1;i<n;i++){
    scanf("%lld",&a);
    sum[i]=sum[i-1]+a;
  }
  for(i=0;i<n-1;i++){
    if(min>llabs(sum[n-1]-2*sum[i]))
      min=llabs(sum[n-1]-2*sum[i]);
  }
  printf("%lld\n",min);
} 