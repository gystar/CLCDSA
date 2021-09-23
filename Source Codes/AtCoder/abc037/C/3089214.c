#include <stdio.h>

typedef long long ll;

ll a[100005];

int main() {

	int N,K;

	scanf("%d %d",&N,&K);

	int i;

	for(i=0;i<N;i++){
		scanf(" %lld",&a[i]);
	}

	ll sum=0ll;
	for(i=0;i<K;i++){
	sum+=a[i];
	}

	ll ans=sum;

	int l=0;

	for(i=K;i<N;i++){
	sum+=a[i];
	sum-=a[l];
	ans+=sum;
	l++;
	}
	printf("%lld\n",ans);

	return 0;
} 