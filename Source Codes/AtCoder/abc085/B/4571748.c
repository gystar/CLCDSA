#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d",&n);
	
	int d[200];
	
	for(int i=0;i<n;i++){
		scanf("%d",&(d[i]));
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(d[i]==d[j]){
				d[j]=0;
			}
		}
	}
	
	int count=0;
	
	for(int i=0;i<n;i++){
		if(d[i]!=0){
			count++;
		}
	}
	
	printf("%d\n",count);
	
	return 0;
} 