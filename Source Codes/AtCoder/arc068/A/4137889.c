#include<stdio.h>

int main(){
		long long x,ans;
		scanf("%lld",&x);
		if(x<=6)ans=1;
		else if(x<=11)ans=2;
		else {
				ans=(x/11)*2;
				if(1<=x%11&&x%11<=6)ans++;
				else if(7<=x%11)ans+=2;
		}
		printf("%lld\n",ans);
		return 0;
} 