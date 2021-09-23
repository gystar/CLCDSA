#include<stdio.h>

int main(void)
{
	int a,b,c,d;

	scanf("%d %d %d",&a,&b,&c);
	
	d=b/a;

	if(d>=c){
	printf("%d\n",c);

	}else{
		printf("%d\n",d);
	}

	return 0;
} 