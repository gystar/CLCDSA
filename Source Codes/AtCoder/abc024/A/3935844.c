#include <stdio.h>

int main(){
	int a, b, c, k, s, t, sum;
	scanf("%d %d %d %d", &a, &b, &c, &k);
	scanf("%d %d", &s, &t);
	if(s + t >= k){
		a -= c;
		b -= c;
	}
	sum = a * s + b * t;
	printf("%d\n", sum);
	return 0;
} 