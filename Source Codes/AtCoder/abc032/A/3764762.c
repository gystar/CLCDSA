#include<stdio.h>
int A, B, N;
int main(){
	scanf("%d%d%d", &A, &B, &N);
	while(1){
		if(N%A==0 && N%B==0){break;}
		N++;
	}
	printf("%d\n", N);
} 