#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c){
		printf("1\n");
	}
	else if(a==b || a==c || b==c){
		printf("2\n");
	}
	else{
		printf("3\n");
	}
	return 0;
} 