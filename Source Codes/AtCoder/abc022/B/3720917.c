#include<stdio.h>
int N, A, ans, i;
int is[100001];
int main(){
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%d", &A);
		if(is[A]){
			ans++;
		}else{
			is[A]=1;
		}
	}
	printf("%d\n", ans);
} 