#include<stdio.h>

int main(void)
{
	int H, W, h, w;
	scanf("%d%d%d%d", &H, &W, &h, &w);
	printf("%d", (H*W) - (h*W + H * w - h * w));
	return 0;
} 