#include<stdio.h>

int main(){
	int i,ans=0,a[7],b[7];
	for(i=0;i<7;i++)scanf("%d",&a[i]);
	for(i=0;i<7;i++)scanf("%d",&b[i]);
	for(i=0;i<7;i++)ans+=(a[i]>b[i]?a[i]:b[i]);
	printf("%d\n",ans);
	return 0;
} 