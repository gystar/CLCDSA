#include <stdio.h>
int main(void){
	int n,i=0,t,min=101;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		if(t<=min) min=t;
	}
	printf("%d\n",min);
	return 0;
} 