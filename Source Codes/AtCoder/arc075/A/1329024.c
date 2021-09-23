#include <stdio.h>
 
int main(){
	int i, N, sum = 0, min = 101;
	int s[101];


	scanf("%d", &N);

	for(i = 1; i <= N; i++) {
		scanf("%d", &s[i]);
	}

	for(i = 1; i <= N; i++) {
		sum += s[i];
		if(s[i] % 10 != 0 && min > s[i]) {
			min = s[i];
		}
	}

	if(sum % 10 != 0) {
		printf("%d", sum);
	}

	else {
		if(min == 101) {
			printf("0");
		}
		else {
			printf("%d", sum - min);
		}
	}
 
} 