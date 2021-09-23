#include<stdio.h>
int main(){
	int r=0,g=0,b=0,n;
	char c;
	scanf("%d",&n);
	while(n--){
		scanf(" %c",&c);
		c-'B'?c-'G'?r++:g++:b++;
	}
	printf("%d\n",r%2+g%2+b%2);
	return 0;
} 