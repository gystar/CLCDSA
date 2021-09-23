#include<stdio.h>
int n, d, a, i;
int ans;
int main(){
	scanf("%d%d%d", &n, &d, &ans);
	for(i=0; i<n; i++){
		scanf("%d", &a);
		ans += (d-1)/a+1;
	}
	printf("%d\n", ans);
} 