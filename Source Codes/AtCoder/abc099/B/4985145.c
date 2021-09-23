#include <stdio.h>

int calc_sum(n){
	int Sum = 0;
	for(int i = 1;i <= n;i++)
		Sum += i;
	return Sum;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int idx, ans;
	idx = b - a - 1;
	ans = calc_sum(idx) - a;
	
	printf("%d", ans);
	
	return 0;
} 