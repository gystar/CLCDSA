#include<stdio.h>

int main(){
	int T,N,M,i,a=0,b=0;
	scanf("%d %d",&T,&N);
	int A[N];
	for(i=0;i<N;i++) scanf("%d",&A[i]);
	scanf("%d",&M);
	int B[M];
	for(i=0;i<M;i++) scanf("%d",&B[i]);
	
	for(;;){
		if(A[a]>B[b]){
			puts("no");
			break;
		}
		else if(A[a]+T>=B[b]){
			a++;
			b++;
		}
		else{
			a++;
		}

		if(b==M){
			puts("yes");
			break;
		}
		if(a==N){
			puts("no");
			break;
		}
	}
} 