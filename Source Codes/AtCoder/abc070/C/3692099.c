#include<stdio.h>
long long bei(long long a,long long b);
int main(){
	long long a[101];
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(i=1;i<n;i++){
		a[i+1]=bei(a[i],a[i+1]);
	}printf("%lld\n",a[n]);
	return 0;
}
long long bei(long long a,long long b){
	long long i,temp;
    if(a<b){
    	temp=a;
    	a=b;
		b=temp;
    }for(i=1; ;i++){
    	if(a*i%b==0)return a*i;
    }
} 