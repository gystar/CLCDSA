#include <stdio.h>
int main(void){
	int n,a,b;
	scanf("%d",&n);
	if(n==1){
		printf("Hello World\n");
	}
	if(n==2){
		scanf("%d%d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
} 