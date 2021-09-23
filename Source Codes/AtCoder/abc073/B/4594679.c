#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d",&n);
	
	int l[n][2];
	
	int sum=0;
	
	for(int i=0;i<n;i++){
		scanf("%d",&(l[i][0]));
		scanf("%d",&(l[i][1]));
		
		sum=sum+l[i][1]-l[i][0]+1;
	}
	
	printf("%d\n",sum);
	
	return 0;
} 