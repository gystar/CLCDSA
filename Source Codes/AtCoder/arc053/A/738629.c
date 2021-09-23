#include <stdio.h>

int main(void) {
	int H, W;
	
	scanf("%d %d", &H, &W);
	
	printf("%d\n", 2*H*W-H-W);
	
	return 0;
} 