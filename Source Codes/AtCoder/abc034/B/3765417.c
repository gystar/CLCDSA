#include<stdio.h>
int n;
int main(){
	scanf("%d", &n);
	if(n%2){
		printf("%d\n", n+1);
	}else{
		printf("%d\n", n-1);
	}
} 