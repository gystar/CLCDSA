#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a==1){
		a=14;
	}
	if(b==1){
		b=14;
	}
	if(b<a){
		printf("Alice\n");
	}
	else if(a<b){
		printf("Bob\n");
	}
	else{
		printf("Draw\n");
	}
	return 0;
} 