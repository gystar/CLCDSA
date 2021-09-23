#include<stdio.h>
long long int W;
int N, S, T, A, ans, i;
int main(){
	scanf("%d%d%d%d", &N, &S, &T, &W);
	if(S<=W && W<=T){
		ans++;
	}
	for(i=1; i<N; i++){
		scanf("%d", &A);
		W+=A;
		if(S<=W && W<=T){
			ans++;
		}
	}
	printf("%d\n", ans);
} 