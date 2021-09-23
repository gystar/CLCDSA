#include<stdio.h>
int min(int a, int b){return a>b?b:a;}
int n, m, x, a, i;
int now[2];
int main(){
	scanf("%d%d%d", &n, &m, &x);
	for(i=0; i<m; i++){
		scanf("%d", &a);
		now[a<x]++;
	}
	printf("%d\n", min(now[0], now[1]));
} 