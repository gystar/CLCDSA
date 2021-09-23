#include <stdio.h>
int main(void){
	int n,a,k[100001]={0},i,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(k[a]==1) count++;
		k[a]=1;
	}
	printf("%d\n",count);
	return 0;
} 