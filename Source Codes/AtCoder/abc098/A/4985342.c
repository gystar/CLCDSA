#include <stdio.h>

int main(){
	int a, b, ans;
	scanf("%d%d", &a, &b);
	
	ans = a + b;
	ans = (a-b)>ans ? a-b : ans;
	ans = (a*b)>ans ? a*b : ans;
	
	printf("%d", ans);
	
	return 0;
} 