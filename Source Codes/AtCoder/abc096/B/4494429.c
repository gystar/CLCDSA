#include <stdio.h>
#include <math.h>

int main(void)
{
	int a,b,c,k,x,sum;
	int max=-1;
	
	scanf("%d%d%d%d",&a,&b,&c,&k);
	
	if(a>b&&a>c){
		max=a;
		sum=b+c;
	}else if(b>c&&b>a){
		max=b;
		sum=c+a;
	}else{
		max=c;
		sum=a+b;
	}
	
	x=pow(2,k);
	
	printf("%d\n",max*x+sum);
	
	return 0;
} 