#include<stdio.h>
 int main(void) {
	int N, M, X, Y, x[100], y[100];
	int xMax = -100, yMin = 100, i;
	scanf("%d %d %d %d", &N, &M, &X, &Y);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &x[i]);
		if(x[i] > xMax) xMax = x[i];
	}
	
	for(i = 0; i < M; i++) {
		scanf("%d", &y[i]);
		if(y[i] < yMin) yMin = y[i];
	}
	
	if(xMax+1 > X) {
		if(yMin <= Y) {
			if(xMax < yMin) {
				printf("No War");
			}
			else printf("War");
		}
		else printf("War");
	}
	else printf("War");
	
	return 0;
} 