#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void){
	int A,B;
	scanf("%d %d", &A,&B);
	if (A+B >= 10) {
		printf("error\n");
	}else{
		printf("%d\n",A+B);
	}
	return 0;
} 