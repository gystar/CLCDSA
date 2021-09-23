#include <stdio.h>

#define int long long

signed main(){
	int N, i = 0;
	scanf("%lld", &N);
	for(i = 0, N++; N > 1; i = (i + 1) % 2){
		if(i == 0){
			N = (N + 1) / 2;
		}
		else{
			N = N / 2;
		}
	}
	if(i == 0){
		printf("Takahashi\n");
	}
	else{
		printf("Aoki\n");
	}
	return 0;
} 