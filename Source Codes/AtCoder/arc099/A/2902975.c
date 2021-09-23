#include<stdio.h>

int main(void){
	int n,k,i,a;
	int ans = 0;
	int buf = 0;
	scanf("%d %d", &n, &k);
	
	for(i = 0; i < n; i++){
		scanf("%d", &a);
	}
	ans = (n + k - 3) / (k - 1);
	
	printf("%d\n", ans);
	
	return 0;
} 