#include <stdio.h>
int main(){
	int k,s=1000,a,i,j;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf ("%d",&a);
		for(j=0;j<1000;j++){
		if(a%2==0){
			a=a/2;
		}
		else{
		if(s>j){
			s=j;
			break;
		}	
		}	
		}
	}
	printf ("%d",s);
	return 0;
	} 