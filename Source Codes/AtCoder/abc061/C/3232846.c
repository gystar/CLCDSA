#include <stdio.h>
int main(void){
	int n,i,a,b;
	long long k,data[100001]={0},c=0;
	scanf("%d%lld",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		data[a] += b;
	}
	for(i=0;c<k;i++){
		c+=data[i];
	}
	printf("%d",i-1);
	return 0;
} 