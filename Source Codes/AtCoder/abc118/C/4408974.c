#include <stdio.h>

int gcd(long a,long b){
    long c;
    if(a<b){a+=b;b=a-b;a-=b;}
    while(b!=0){c=a%b;a=b;b=c;}
    return a;
}
int main(void){
  int N,i;
  long A,ans;
  scanf("%d",&N);
  scanf("%ld",&ans);
  for(i=1;i<N;i++)
  {
    scanf(" %ld",&A);
    ans=gcd(ans,A);
  }
  printf("%ld",ans);
  return 0;
} 