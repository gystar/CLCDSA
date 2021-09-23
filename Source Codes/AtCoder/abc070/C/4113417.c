#include<stdio.h>

long long juk(long long a,long long b){
	if(a%b==0)return b;
	return juk(b,a%b);
}

int main(){
	int n,i;
	long long t[100],ans=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%lld",&t[i]);
	for(i=0;i<n;i++){
		ans=t[i]/juk(t[i],ans)*ans;
		//printf("%lld\n",ans);
	}
	printf("%lld\n",ans);
	return 0;
} 