#include<stdio.h>
int main() {
	int N,t[100005],M,p,x,i,j;
	scanf("%d",&N);
	for(i=1; i<=N; i++) {
		scanf("%d",&t[i]);
	}
	scanf("%d",&M);
	for(i=0; i<M; i++) {
		int sum=0;
		scanf("%d %d",&p,&x);
		for(j=1; j<=N; j++) {
			if(j==p) {
				sum+=x;
				continue;
			}
			sum+=t[j];
		}
		printf("%d\n",sum);

	}
	return 0;
} 