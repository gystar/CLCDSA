#include <stdio.h>

int main(void){
	int i,n,p,max=100,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&p);
		sum += p;
		if(p>max) max = p;
	}
	sum -= max;
	sum += max*0.5;
	printf("%d",sum);
	return 0;
} 