#include <stdio.h>

int  main(void)
{
	
	int n,a[101];
	int max=-1;
	int min=1001;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&(a[i]));
		
		if(a[i]>max){
			max=a[i];
		}
		
		if(a[i]<min){
			min=a[i];
		}
		
	}
	
	printf("%d\n",max-min);
	
	return 0;
} 