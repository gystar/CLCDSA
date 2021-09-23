#include <stdio.h>
int main(void){
	int x;
	scanf("%d",&x);
	printf("%d\n",x/10+(x-(x/10)*10));
	return 0;
} 