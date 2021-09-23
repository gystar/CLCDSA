#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n==1){
		printf("Not Prime\n");
		return 0;
	}
	if(n!=2&&n%2==0){
		printf("Not Prime\n");
		return 0;
	}
	if(n!=5&&n%5==0){
		printf("Not Prime\n");
		return 0;
	}
	if(n!=3&&n%3==0){
		printf("Not Prime\n");
		return 0;
	}

	printf("Prime\n");
	return 0;
} 