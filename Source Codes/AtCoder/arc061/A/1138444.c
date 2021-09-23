#include <stdio.h>
#include <string.h>
#define ll long long

 int main(void)
 {
 	char a[11];
 	scanf("%s",&a);
 	int p=strlen(a)-1;
 	ll ans=0;
 	for(int i=0;i<1<<p;i++){
 		ll sum=a[0]-'0';
 		for(int j=0;j<p;j++){
 			if(i>>j&1) ans+=sum,sum=(a[j+1]-'0');
 			else sum=sum*10+(a[j+1]-'0');
 		}
 		ans+=sum;
 	}
 	printf("%lld",ans);
 	return 0;
 } 