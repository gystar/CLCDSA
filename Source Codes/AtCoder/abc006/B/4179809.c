#include <stdio.h>

int main(){
  long long int n,i,j,a=0;
  long long int tmp[3]={0,0,1};
  scanf("%d",&n);
  for(i=4;i<=n;i++){
    a=0;
    for(j=0;j<3;j++)a+=tmp[j];
    tmp[0]=tmp[1];
    tmp[1]=tmp[2];
    tmp[2]=a%10007;
  }
  a%=10007;
  if(n<=2)printf("0\n");
  else if(n==3)printf("1\n");
  else printf("%lld\n",a);
} 