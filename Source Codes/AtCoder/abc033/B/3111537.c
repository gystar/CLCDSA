#include <stdio.h>

char S[1005][25];
int P[1005];

int main(){

	int N;

	scanf("%d",&N);

	int i;

	int sum=0;

	for(i=0;i<N;i++){
	scanf("%s %d",S[i],&P[i]);
	sum+=P[i];
	}

	for(i=0;i<N;i++){
		if(sum/2<P[i]){
			printf("%s\n",S[i]);
			return 0;
		}
	}
	printf("atcoder\n");

return 0;
} 