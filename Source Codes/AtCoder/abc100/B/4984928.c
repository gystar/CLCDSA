#include <stdio.h>

int main(){
	int D, N;
	scanf("%d%d", &D, &N);
	
	if(D==0)
		if(N!=100) printf("%d", N);
		else printf("101");
	else if(D==1)
		if(N!=100) printf("%d", N*100);
		else printf("10100");
	else
		if(N!=100) printf("%d", N*10000);
		else printf("1010000");
	return 0;
} 