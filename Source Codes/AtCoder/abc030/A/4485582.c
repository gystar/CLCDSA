#include<stdio.h>
int main(void)
{
	float a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(b/a==d/c){
		printf("DRAW\n");
	}
	else if(b/a<=d/c){
		printf("AOKI\n");
	}
	else{
		printf("TAKAHASHI\n");
	}
	return 0;
} 