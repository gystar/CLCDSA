#include <stdio.h>

int main(){
	int n, x, sum = 0, tmp;
	scanf("%d %d", &n, &x);
	for(int i = 0; i < n; i++){
		scanf("%d", &tmp);
		if((x >> i) & 1)
			sum += tmp;
	}
	printf("%d\n", sum);
} 