#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	printf("%02d:%02d:%02d\n", n / 3600, n % 3600 / 60, n % 60);
	return 0;
} 