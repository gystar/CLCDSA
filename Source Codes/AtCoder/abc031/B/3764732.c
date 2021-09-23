#include<stdio.h>
int L, H, N, A, i;
int main(){
	scanf("%d%d%d", &L, &H, &N);
	for(i=0; i<N; i++){
		scanf("%d", &A);
		if(A>H){
			printf("-1\n");
		}else if(A<L){
			printf("%d\n", L-A);
		}else{
			printf("0\n");
		}
	}
} 