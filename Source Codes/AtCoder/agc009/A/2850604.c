#include <stdio.h>

int main(void){
    int n;
    long long ans=0;
    scanf("%d",&n);
    long long a[n],b[n];
    for (int i=0; i<n; i++){
        scanf("%lld%lld",&a[i],&b[i]);
    }
    for (int i=n-1; i>=0; i--){
        a[i]+=ans;
        if (a[i]%b[i]!=0){
            ans+=b[i]-(a[i]%b[i]);
        }
    }
    printf("%lld\n",ans);
	return 0 ;
} 