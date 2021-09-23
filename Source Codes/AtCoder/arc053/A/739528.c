#include<stdio.h>
#include<math.h>

int main(void){
	int H,W;

	scanf("%d %d", &H, &W);

	printf("%d", (H - 1)*W + (W - 1)*H);
	return 0;
} 