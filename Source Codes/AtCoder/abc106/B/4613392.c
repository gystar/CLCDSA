#include <stdio.h>

int main(void){
	int n;
	int count = 0;
	int chk;
	scanf("%d", &n);
	if(n % 2 == 0)n--;
	for(; n >= 105; n -= 2){
		chk = 0;
		for(int i = 1; i <= n; i++){
			if(n % i == 0)chk++;
			if(chk > 8)break;
		}
		if(chk == 8)count++;
	}
	printf("%d\n", count);
	return 0;
} 