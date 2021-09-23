#include <stdio.h>

int main(void) {
	int a,b,n;
	scanf("%d %d %d",&n,&a,&b);
	if(n<=5){
		printf("%d\n",b*n);
	} else {
		printf("%d\n",(n-5)*a+b*5);
	}
	return 0;
} 