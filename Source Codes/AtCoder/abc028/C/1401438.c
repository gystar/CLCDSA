#include <stdio.h>
int max(int a, int b){
	if(a > b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int A, B, C, D, E;
	scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);
	printf("%d\n", max(A + D + E, B + C + E));
	return 0;
} 