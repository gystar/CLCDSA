#include<stdio.h>
int A, B;
int min(int a, int b){return a>b?b:a;}
int main(){
	scanf("%d%d", &A, &B);
	printf("%d\n", min((10+A-B)%10, (10+B-A)%10));
} 