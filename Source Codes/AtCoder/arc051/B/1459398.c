#include <stdio.h>

int main(){
	int K, a, b;
	scanf("%d", &K);
	for(a = 1, b = 1; K > 1; K--){
		a = a + b;
		b = a - b;
	}
	printf("%d %d\n", b, a);
	return 0;
} 