#include<stdio.h>
int A, B, C, D, N;
int main(){
	scanf("%d%d%d%d", &A, &B, &C, &D);
	N = B*C-A*D;
	if(N>0){
		printf("TAKAHASHI\n");
	}else if(N<0){
		printf("AOKI\n");
	}else{
		printf("DRAW\n");
	}
} 