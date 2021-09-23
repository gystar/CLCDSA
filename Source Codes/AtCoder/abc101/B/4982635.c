#include <stdio.h>

int digit_sum(n){
	int Sum = 0;
	while(n > 0){
		Sum += n % 10;
		n /= 10;
	}
	return Sum;
}

int main(){
	int N;
	scanf("%d", &N);
	int S_N;
	S_N = digit_sum(N);
	if(N % S_N) printf("No");
	else printf("Yes");
	
	return 0;
} 