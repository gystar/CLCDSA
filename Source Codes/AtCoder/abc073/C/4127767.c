#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const int *a,const int *b){
	return *a - *b;
}

int main(int argc, char const *argv[]){
	int N,*A,ans = 0;
	scanf("%d",&N);
	A = (int *)malloc(sizeof(int) * N);


	for(int i = 0;i < N; ++i)  scanf("%d",&A[i]);
	qsort(A, N, sizeof(int), comp);

	for(int i = 0;i < N; ++i){
		if(A[i] == A[i + 1])  ++i;
		else  ++ans;
	}
	printf("%d\n",ans);
	return 0;
} 