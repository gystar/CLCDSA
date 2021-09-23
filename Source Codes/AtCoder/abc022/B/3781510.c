#include<stdio.h>

int main(){
		int n,a[100000],b[100001]={0},ans=0,i;
		scanf("%d",&n);
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		for(i=0;i<n;i++){
				b[a[i]]++;
		}
		for(i=0;i<=100000;i++){
				if(b[i]>1)ans+=b[i]-1;
		}
		printf("%d\n",ans);
		return 0;
} 