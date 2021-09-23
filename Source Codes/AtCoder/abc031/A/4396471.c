#include <stdio.h>
int main(void){
	int a,d;
	scanf("%d %d",&a,&d);
	if((a+1)*d>=a*(d+1)) printf("%d\n",(a+1)*d);
	else printf("%d\n",a*(d+1));
	return 0;
} 