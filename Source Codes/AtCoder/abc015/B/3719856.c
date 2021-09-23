#include<stdio.h>
int N, n, a, sum, i;
int main(){
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%d", &a);
		if(a!=0){
			sum += a;
			n++;
		}
	}
	printf("%d\n", (sum+n-1)/n);
} 