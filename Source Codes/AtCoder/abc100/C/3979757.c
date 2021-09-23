#include<stdio.h>

int ha(long a){
	int r=0;
	while(a%2==0){
		a=a/2;
		r++;
	}
	return r;
}

int main(){
	int n,i,ans=0;
	long a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%ld",&a);
		ans+=ha(a);
	}
	printf("%d\n",ans);
	return 0;
} 