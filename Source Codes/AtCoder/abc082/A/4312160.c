#include <stdio.h>
int main(){
	int a,b,x;
	scanf("%d %d",&a,&b);
	if ( ( a + b ) % 2 == 1 ) {
		x = ( a + b + 1 ) / 2;
	} else {
		x = ( a + b ) / 2;
	}
	printf("%d",x);
} 