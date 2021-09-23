#include<stdio.h>

int main(){
	int A, D;
	scanf("%d %d", &A, &D);

	if(A >= D){
		printf("%d\n", A*(D+1));
	} else {
		printf("%d\n", (A+1)*D);
	}
} 