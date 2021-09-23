#include<stdio.h>

int main(){
	int n,k,i,tmp,a[100000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	tmp=a[0]+a[1];
	for(i=2;i<n;i++){
		if(i>2)tmp-=a[i-3];
		tmp+=a[i];
		if(tmp<k){
			printf("%d\n",i+1);
			return 0;
		}
	}
	puts("-1");
	return 0;
} 