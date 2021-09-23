#include<stdio.h>
int a, b, k, c, d, i;
int main(){
	scanf("%d%d%d", &a, &b, &k);
	c = a+k-1;
	d = b-k+1;
	if(c>=d){c=b; d=b+1;}
	for(i=a; i<=c; i++){
		printf("%d\n", i);
	}
	for(i=d; i<=b; i++){
		printf("%d\n", i);
	}
} 