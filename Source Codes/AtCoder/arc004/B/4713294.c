#include<stdio.h>

int main(){
	int n,i,d[500],f=-1;
	int xans=0,nans=200000;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&d[i]);
	for(i=0;i<n;i++)xans+=d[i];
	for(i=0;i<n;i++){
		if(xans<d[i]*2)f=i;
	}
	if(f==-1)nans=0;
	else nans=d[f]*2-xans;
	printf("%d\n%d\n",xans,nans);
	return 0;
} 