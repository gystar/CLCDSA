#include <stdio.h>
int main (){
int n,t,i,x[102]={0},k,min=1003,ya=0;
	scanf("%d %d",&n,&t);
	for(i=0;i<n;i++){
	scanf ("%d %d",&x[i],&k);
		if(k<=t)
		{
			if(min>x[i])
			{
				min=x[i];
			}
		}
		else
		{
		ya++;
		}	
	}
	if(ya==n)
	{
	printf("TLE");	
	}
	else
	{
	printf("%d",min);	
	}
	return 0;
	} 