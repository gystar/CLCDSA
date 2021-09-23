#include<stdio.h>
int N, h, m, s;
int main(){
	scanf("%d", &N);
	s = N % 60;
	N /= 60;
	m = N % 60;
	N /= 60;
	h = N;
	printf("%02d:%02d:%02d\n", h, m, s);
} 