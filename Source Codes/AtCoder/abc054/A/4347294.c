#include <stdio.h>

int main(void)
{
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	if(a==b){
		printf("Draw\n");
	}else if(a!=1&&b!=1){
		if(a>b){
			printf("Alice\n");
		}else{
			printf("Bob\n");
		}
	}else if(a==1){
		printf("Alice\n");
	}else{
		printf("Bob\n");
	}
	
	return 0;
} 