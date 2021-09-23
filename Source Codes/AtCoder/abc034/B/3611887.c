#include <stdio.h>

int main(){
	long a;
	scanf("%ld",&a);
	if(a%2==0)a--;
	else a++;
	printf("%ld\n",a);
	return 0;
} 