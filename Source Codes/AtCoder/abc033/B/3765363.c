#include<stdio.h>
int N, sum, i, j;
int P, maxP;
char S[21], maxS[21];
int main(){
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%s%d", S, &P);
		sum += P;
		if(P > maxP){
			maxP = P;
			for(j=0; j<21; j++){
				maxS[j] = S[j];
			}
		}
	}
	if(maxP<<1 > sum){
		printf("%s\n", maxS);
	}else{
		printf("atcoder\n");
	}
} 