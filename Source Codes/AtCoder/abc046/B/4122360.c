#include<stdio.h>
int main() {
	int N,K;
	scanf("%d %d",&N,&K);
	int a=1,i;
	for(i=0; i<N; i++) {
		if(i==0) {
			a=K;
		} else {
			a=a*(K-1);
		}
	}
	printf("%d\n",a);
	return 0;
} 