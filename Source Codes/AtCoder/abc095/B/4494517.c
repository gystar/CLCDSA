#include <stdio.h>

int main(void){
	
	int n,x,m[110];
	int min=10000;
	int sum=0;
	
	scanf("%d%d",&n,&x);
	
	for(int i=0;i<n;i++){
		scanf("%d",&(m[i]));
		if(min>m[i]){
			min=m[i];
		}
		sum=sum+m[i];
	}
	
	printf("%d\n",(x-sum)/min+n);
	
	return 0;
} 