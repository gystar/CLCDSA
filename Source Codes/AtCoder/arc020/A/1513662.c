#include <stdio.h>

int ABS(int a){
	if(a >= 0){
		return a;
	}
	else{
		return -a;
	}
}

int main(){
	int A, B;
	scanf("%d%d", &A, &B);
	if(ABS(A) < ABS(B)){
		printf("Ant\n");
	}
	else if(ABS(A) == ABS(B)){
		printf("Draw\n");
	}
	else{
		printf("Bug\n");
	}
	return 0;
} 