#include <stdio.h>

int main(void)
{
	int n,p[100];
	int max=-1;
	int sum=0;
	
	scanf("%d",&n);
	
	int i=0;
	
	while(i<n){
		scanf("%d",&(p[i]));
		
		if(max<p[i]){
			max=p[i];
		}
		
		sum=sum+p[i];
		
		i++;
		
	}
	
	printf("%d\n",sum-max/2);
	
	return 0;
} 