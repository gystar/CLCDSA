#include <stdio.h>

int main(){
	int N, k;
	scanf("%d%d", &N, &k);
	if(N / 2 >= k){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
} 