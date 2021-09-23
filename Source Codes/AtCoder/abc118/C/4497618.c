#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b){
	if(b == 0){
		return a;
	}
	else{
		return GCD(b, a % b);
	}
}

int main(){
	int N, A, i, g = 0;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		scanf("%d", &A);
		g = GCD(g, A);
	}
	printf("%d\n", g);
	return 0;
} 