#include<stdio.h>
int N, a, b, K, P, i;
char is[101];
int main(){
	scanf("%d%d%d%d", &N, &a, &b, &K);
	is[a]=1;
	is[b]=1;
	for(i=0; i<K; i++){
		scanf("%d", &P);
		if(is[P]){
			printf("NO\n");
			return 0;
		}
		is[P]=1;
	}
	printf("YES\n");
} 