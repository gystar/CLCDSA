#include <stdio.h>

int main(void)
{
	int a,b,c,d;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if((double)b/a>(double)d/c){
		printf("TAKAHASHI\n");
	}else if((double)b/a==(double)d/c){
		printf("DRAW\n");
	}else{
		printf("AOKI\n");
	}
	
	return 0;
} 