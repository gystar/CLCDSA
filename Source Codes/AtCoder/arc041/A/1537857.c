#include <stdio.h>

int main(){
	int x, y, k;
	scanf("%d%d%d", &x, &y, &k);
	if(k < y){
		printf("%d\n", x + k);
	}
	else{
		printf("%d\n", x - (k - y) + y);
	}
	return 0;
} 