#include <stdio.h>

int main(void){
	int A,B,C,D,E;
	scanf("%d%d%d%d%d",&A,&B,&C,&D,&E);
	printf("%d\n",A+D>B+C?A+D+E:B+C+E);
	return 0;
} 