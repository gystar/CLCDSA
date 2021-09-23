#include <stdio.h>

int  main(void)
{
	int n,a[100],max,min;
	
	max=-1;
	min=1000000000;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&(a[i]));
		if(a[i]<min){
			min=a[i];
		}
		if(a[i]>max){
			max=a[i];
		}
	}
	
	printf("%d\n",max-min);
	
	return 0;
} 