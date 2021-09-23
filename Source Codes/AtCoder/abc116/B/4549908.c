#include <stdio.h>

int func_f(int n){return n%2==0?n/2:3*n+1;}

int main(void){
	int S, count = 1, a;
	scanf("%d",&S);
	int num[1000001]={0};
	num[S] = 1;
	a = S;
	while(1){
		count++;
		a = func_f(a);
		num[a]++;
		if(num[a] == 2)break;
	}
	printf("%d",count);
	return 0;
} 