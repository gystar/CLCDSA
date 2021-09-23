#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define llong long long
#define fr(i,l,r) for(i=(l);i<(r);i++)
#define min(p,q)((p)<(q)?(p):(q))




int main(void)
{
	//?????
	int n;
	int a[110];
	int iro[10];
	
	//??????
	int i,j,k,l;
	int flag=0;
	llong int ans=0;
	int count=0;
	int sum=0;
	long int temp,temp1,temp2;
	int max,min;
	int len;
	//????????
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
//	printf("n?%d??\n", n);
//	printf("??????????\n");
	//?????
	
	for(i=0;i<10;i++){
		iro[i]=0;
	}
	
	for(i=0;i<n;i++){
		temp=a[i]/400;
		if(temp<=7){
			iro[temp]++;
		}else{
			iro[9]++;
		}
	}
	
	for(i=0;i<=7;i++){
		if(iro[i]>0){
			count++;
		}
	}
	
	if(count==0){
		if(iro[9]==0){
			min=0;
			max=0;
		}else{
			min=1;
			max=iro[9];
		}
	}else{
		min=count;
		max=count+iro[9];
	}
	
//	printf("??????\n");
	//??
	
	printf("%d %d",min,max);
	
//	printf("???????\n");
	
	return 0;
	
} 