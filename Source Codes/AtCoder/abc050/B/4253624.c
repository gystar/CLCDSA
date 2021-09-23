#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	int N;
	int T[100],i,j;
	int M;
	int P[100],X[100];
	scanf("%d",&N);
	for(i=0; i<N; i++) {
		scanf("%d",&T[i]);
	}
	scanf("%d",&M);
	for(i=0; i<M; i++) {
		scanf("%d %d",&P[i],&X[i]);
	}
	for(i=0; i<M; i++) {
		int sum=0;
		for(j=0; j<N; j++) {
			if(j!=P[i]-1) {
				sum+=T[j];
			} else {
				sum+=X[i];
			}
		}
		printf("%d\n",sum);
	}
	return 0;
} 