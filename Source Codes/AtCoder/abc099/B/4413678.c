#include <stdio.h>
int main(){
	int a,b,i,sum=0;
	scanf ("%d%d",&a,&b);
	for (i=b-a-1;i>0;i--){
		sum=sum+i;
		}
		printf ("%d",sum-a);
	return 0;
	} 