#include<stdio.h>

int main(){
		int n,i,j;
		long long x,a[100];
		scanf("%d%lld",&n,&x);
		for(i=0;i<n;i++)scanf("%lld",&a[i]);
		for(i=0;i<n;i++){
				for(j=0;j<n;j++){
						if(a[i]<a[j]){
								long long tmp=a[i];
								a[i]=a[j];
								a[j]=tmp;
						}
				}
		}
		for(i=0;i<n;i++){
		//		printf("%lld\n",a[i]);
				x-=a[i];
				if(x<0)break;
		}
		if(i==n&&x>0)i--;
		printf("%d\n",i);
		return 0;
} 