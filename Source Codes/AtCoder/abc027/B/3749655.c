#include<stdio.h>
int N, a, b[101], ans, num, i;
int main(){
	scanf("%d", &N);
	b[0]=0;
	for(i=0; i<N; i++){
		scanf("%d", &a);
		b[i+1] = b[i] + a;
	}
	if(b[N]%N!=0){
		printf("-1\n");
		return 0;
	}
	num = b[N]/N;
	for(i=1; i<=N; i++){
		if(num*i != b[i]){
			ans++;
		}
	}
	printf("%d\n", ans);
} 