#include <stdio.h>

int main(void){
	int H,W,N;
	scanf("%d %d", &H,&W);
	if(H*W>1){
		N=(H-1)*W+H*(W-1);
	}else{
		N=0;
	}
	printf("%d\n", N);
	return 0;
} 