#include<stdio.h>

int main(void) {
	int n,sum;
	scanf("%d",&n);
	while(n) {
		sum += n%10;
		n /= 10;
	}
	printf("%d\n",sum);
	return 0;
} 