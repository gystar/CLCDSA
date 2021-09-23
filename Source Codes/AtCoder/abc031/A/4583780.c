#include <stdio.h>
int main(void){
	int a,d;
	scanf("%d%d",&a,&d);
	if(a*(d+1)> (a+1)*d)d++;
	else a++;
	printf("%d\n",a*d);
	return 0;
} 