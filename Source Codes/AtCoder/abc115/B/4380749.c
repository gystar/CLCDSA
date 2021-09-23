#include <stdio.h>
int main (){
int i,a,b,k[101]={0},max=0,sum=0;
scanf ("%d",&a);
for (i=0;i<a;i++){
	scanf ("%d",&k[i]);
	if (max<k[i]){
	max=k[i];
	b=i;
		}
	}
	for (i=0;i<a;i++){
	if (i==b){
	sum=sum+(k[i]/2);
		}
		else
		{	
		sum=sum+k[i];
		}
		}
		printf ("%d",sum);
	return 0;
	} 