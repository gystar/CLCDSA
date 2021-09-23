#include <stdio.h>

int main(void)
{
	int a[3],result;
	int max=-1;
	int min=101;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	
	for(int i=0;i<3;i++){
		
		if(max<a[i]){
			max=a[i];
		}
		
		if(min>a[i]){
			min=a[i];
		}
	}
	
	result=max-min;
	printf("%d\n",result);
	
	return 0;
} 