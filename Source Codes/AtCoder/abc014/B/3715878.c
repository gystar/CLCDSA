#include<stdio.h>
int N, A, Ans, i;
long long X;
int main(){
	scanf("%d%lld", &N, &X);
	for(i=0; i<N; i++){
		scanf("%d", &A);
		Ans += A*(X & 1);
		X >>= 1;
	}
	printf("%d\n", Ans);
} 