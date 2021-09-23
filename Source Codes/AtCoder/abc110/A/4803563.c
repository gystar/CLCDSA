#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b<=a && c<=a){
		printf("%d\n",a*10+b+c);
	}
	else if(a<=b && c<=b){
		printf("%d\n",b*10+a+c);
	}
	else{
		printf("%d\n",c*10+a+b);
	}
	return 0;
} 