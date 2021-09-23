#include<stdio.h>
int main(void)
{
	int a,b,i;
	
	scanf("%d%d",&a,&b);
	i=a+b;
	
	if(i%2==0){
		printf("\n%d\n\n",i/2);
	}else{
		printf("\n%d\n\n",(i+1)/2);
	}
	return 0;
} 