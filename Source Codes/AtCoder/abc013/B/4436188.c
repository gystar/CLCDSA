#include <stdio.h>
int main(void){
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a<b) c=b-a;
	else c=a-b;
	if(c>5) c=10-c;
	printf("%d\n",c);
	return 0;
} 