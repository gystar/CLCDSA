#include <stdio.h>
int main(void){
	char a[8],b[4];
	scanf("%s%s",a,b);
	strcat(a,b);
	printf("%ld\n",2*(atol(a)));
	return 0;
} 