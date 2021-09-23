#include<stdio.h>
int A, B, C;
int main(){
	scanf("%d%d%d", &A, &B, &C);
	if(A+B==C){
		if(A-B==C){
			printf("?\n");
		}else{
			printf("+\n");
		}
	}else{
		if(A-B==C){
			printf("-\n");
		}else{
			printf("!\n");
		}
	}
} 