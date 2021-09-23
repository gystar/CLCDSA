#include <stdio.h>

int min(int a, int b){
	return a <= b ? a : b;
}

int main(){
	int N;
	scanf("%d", &N);
	printf("%d\n", 100 * (N / 10) + min(15 * (N % 10), 100));
} 