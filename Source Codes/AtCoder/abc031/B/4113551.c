#include <stdio.h>

int main(void){
	int L, H, n, in;
	scanf("%d %d", &L, &H);
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &in);
		if(in < L)
			printf("%d\n", L - in);
		else if(in <= H)
			printf("0\n");
		else
			printf("-1\n");
	}
	return 0;
} 