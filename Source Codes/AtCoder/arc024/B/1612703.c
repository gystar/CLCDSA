#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){
	if(a > b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
	int N, i, maxlength = 0, length = 1;
	scanf("%d", &N);
	int *c = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%d", &c[i]);
	}
	for(i = 1; i < 2 * N; i++){
		if(c[i % N] == c[(i - 1) % N]){
			length++;
		}
		else{
			maxlength = max(maxlength, length);
			length = 1;
		}
	}
	maxlength = max(maxlength, length);
	if(maxlength > N){
		printf("-1\n");
	}
	else{
		printf("%d\n", (maxlength + 1) / 2);
	}
	return 0;
} 