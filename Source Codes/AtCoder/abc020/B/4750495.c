#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	// ????
	int A, B;
	char ca[30];
	char cb[30];
	int ans;
	
	// ??
	scanf("%d", &A);
	scanf("%d", &B);
	
	snprintf(ca, 24, "%d", A);
	snprintf(cb, 24, "%d", B);
	ans = atoi(strcat(ca, cb));
	
	// ??
	printf("%d\n", ans*2);
	
	return 0;
	
} 