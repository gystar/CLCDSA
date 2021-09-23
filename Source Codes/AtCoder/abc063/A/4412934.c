#include <stdio.h>
int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a+b<10) printf("%d\n",a+b);
	else printf("error\n");
	return 0;
} 