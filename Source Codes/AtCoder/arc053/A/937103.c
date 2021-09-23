#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define lli long long int
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define	abs(a) ((a)<0?-(a):(a))



int main(void){
	int h,w;
	scanf("%d%d",&h,&w);
	printf("%d\n", (h-1)*w+(w-1)*h);
	return 0;
} 