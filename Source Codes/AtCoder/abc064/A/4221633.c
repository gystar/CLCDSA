#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void){
	int r,g,b;
	scanf("%d %d %d", &r,&g,&b);
	int n = r*100 + g*10 + b;
	if (n % 4 == 0 ) {
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
} 