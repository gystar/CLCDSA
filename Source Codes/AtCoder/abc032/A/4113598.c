#include <stdio.h>

int gcd(int a, int b){
	int c;
	while(a != 0){
		c = a; a = b % a; b = c;
	}
	return b;
}

int main(void){
	int a, b, n;
	int tmp;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &n);
	tmp = a * b / gcd(a, b);
	printf("%d\n", n / tmp * tmp + ((n / tmp * tmp < n) ? tmp : 0));
	return 0;
} 