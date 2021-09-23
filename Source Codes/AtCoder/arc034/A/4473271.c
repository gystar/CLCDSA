#include<stdio.h>

int main(){
	int n,i,a,b,c,d,e;
	double ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		double tmp=a+b+c+d+e*(float)11/90;
		if(tmp>ans)ans=tmp;
	}
	printf("%.8f\n",ans);
	return 0;
} 