#include<stdio.h>
int n, i;
int a, b;
int r, c, t, j;
int main(){
	scanf("%d%d%d", &n, &a, &b);
	r = 0;
	for(i=1; i<=n; i++){
		c=0; t=i;
		for(j=0; j<5; j++){
			c += t % 10;
			t /= 10;
		}
		if(a<=c && c<=b){r+=i;}
	}
	printf("%d\n", r);
} 