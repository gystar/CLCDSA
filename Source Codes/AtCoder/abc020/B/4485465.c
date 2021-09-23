#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(b/100>=1){
		a=a*1000;
	}
	else if(b/10>=1){
		a=a*100;
	}
	else{
		a=a*10;
	}
	printf("%d\n",(a+b)*2);
	return 0;
} 