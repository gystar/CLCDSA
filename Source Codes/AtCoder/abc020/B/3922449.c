#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 100; i > 0; i /= 10){
		if(i <= b){
			a *= i * 10;
			break;
		}
	}
	a += b;
	printf("%d\n", a * 2);
	return 0;
} 