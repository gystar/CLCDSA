#include <stdio.h>
#include <stdlib.h>
#define TEMP 0x3FFFFFFF

int gcd(int a,int b){
	if(!b)	return a;
	else gcd(b,a % b);
}

int abs(int n){
	if(n < 0)	n *= -1;
	return n;
}

int main(int argc, char const *argv[]){
	int n,x,*city;
	int min = TEMP;
	scanf("%d%d",&n,&x);
	city = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i){
		scanf(" %d", &city[i]);
		city[i] = abs(x - city[i]);
		if(city[i] < min)	min = city[i];
	}
	for (int i = 0; i < n; ++i){
		city[i] = gcd(city[i],min);
		if(city[i] < min)	min = city[i];	
	}
	printf("%d\n", min);
	return 0;
} 