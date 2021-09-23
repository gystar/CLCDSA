#include<stdio.h>
int main(void)
{
	int a,b,n;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		n=a-b;
		if(n>5){
		n=b+10-a;
		}
	}else{
		n=b-a;
		if(n>5){
			n=a+10-b;
		}
	}
	printf("%d\n",n);
	return 0;
} 