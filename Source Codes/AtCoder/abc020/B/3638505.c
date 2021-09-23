#include<stdio.h>

int main() {
	int a,b,c;
	int cnt=0;
	scanf("%d%d",&a,&b);
	c = b;
	while (c != 0) {
		c /= 10;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		a *= 10;
	}
	int sum = a + b;
	printf("%d\n", sum * 2);
	return 0;
} 