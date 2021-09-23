#include <stdio.h>
int main(void){
	int x,y,a;
	scanf("%d",&a);
	if(a%2==0){
		x=a/2;
		y=a/2;
	}
	else{
		x=a/2+1;
		y=a/2;
	}
	printf("%d\n",x*y);
	return 0;
} 