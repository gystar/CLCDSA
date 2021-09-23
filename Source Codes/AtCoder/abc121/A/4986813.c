#include <stdio.h>

int main(void) {
	// your code goes here
	int H,W,h,w;
	scanf("%d %d %d %d", &H, &W, &h, &w);
	printf("%d", H*W-h*W-w*(H-h));
	return 0;
} 