#include <stdio.h>
int main(void){int i,n,x,pow=1,ans;scanf("%d%d",&n,&x);int a[n];for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n;i++)pow*=2;for(i=n-1;i>=0;i--){pow/=2;if(x>=pow){x-=pow;ans+=a[i];}}printf("%d\n",ans);return 0;} 