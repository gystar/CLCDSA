#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	//?????
	int n,a,b;
	int x[100010];
	int i,j,k;
	long int ans=0;
	
	//????????
	scanf("%d %d %d",&n,&a,&b);
	
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	
	
//	printf("n?%d??\n", n);
//	printf("??????????\n");
	//?????
	
	for(i=1;i<n;i++){
		if((long)(x[i]-x[i-1])*a<b){
			ans=ans+(long)(x[i]-x[i-1])*a;
		}else{
			ans=ans+b;
		}
	}
		
		
//	printf("??????\n");
	
	//??
	
		printf("%ld",ans);
	
//	printf("???????\n");
	
	return 0;
} 