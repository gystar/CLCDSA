#include<stdio.h>
int main() {
	int a,b;
	char fu;
	scanf("%d %c %d",&a,&fu,&b);
	if(fu=='+')
		printf("%d",a+b);
	else
		printf("%d",a-b);
	return 0;
} 