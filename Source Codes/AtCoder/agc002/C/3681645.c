#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	//?????
	int n,l;
	int a[100010];

	//??????
	int i,j,k;
	int flag=0;
	long int ans=0;
	int count=0;
	int temp,temp1,temp2;
	int max,min;
	int len;
	//????????
	
	scanf("%d %d",&n,&l);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	
//	printf("n?%d??\n", n);
//	printf("??????????\n");
	//?????
	
	for(i=0;i<n-1;i++){
		if(a[i]+a[i+1]>=l){
			flag=1;
			break;
		}
	}
	
	if(flag==0){
		printf("Impossible");
	}else{
		printf("Possible\n");
		temp=i;
		for(i=1;i<=temp;i++){
			printf("%d\n",i);
		}
		for(i=n-1;i>temp;i--){
			printf("%d\n",i);
		}
	}
	
	
//	printf("??????\n");
	//??
	
	
//	printf("???????\n");
	
	return 0;
	
} 