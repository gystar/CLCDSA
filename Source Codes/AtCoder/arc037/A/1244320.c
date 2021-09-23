#include <stdio.h>

int main(void)
{
	int i,n,count=0;
	int m[30];
	
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&m[i]);
	}
	
	for(i=0;i<=n-1;i++){
		if(m[i]-80<0){
			count+=80-m[i];
		}
	}
	
	printf("%d\n",count);
	return 0;
} 