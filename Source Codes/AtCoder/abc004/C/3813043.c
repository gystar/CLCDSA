#include<stdio.h>
char c[7]={'1', '2', '3', '4', '5', '6', 0};
char t;
int N, n, i;
int main(){
	scanf("%d", &N);
	N%=30;
	for(i=0; i<N; i++){
		n=i%5;
		t=c[n]; c[n]=c[n+1]; c[n+1]=t;
	}
	printf("%s\n", c);
} 