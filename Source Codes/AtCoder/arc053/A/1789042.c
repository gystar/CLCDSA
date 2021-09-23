#include <stdio.h>

int main(){
	int H, W;
	scanf("%d%d", &H, &W);
	printf("%d\n", H * (W - 1) + (H - 1) * W);
	return 0;
} 