#include <stdio.h>

int main(void)
{
	int a,b,c,d,sum;
	scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
	
	if(a>b){
		if(c>d){
			sum=b+d;
		}else{
			sum=b+c;
		}
	}else{
		if(c>d){
			sum=a+d;
		}else{
			sum=a+c;
		}
	}
	
	printf("%d\n",sum);
	
	return 0;
} 