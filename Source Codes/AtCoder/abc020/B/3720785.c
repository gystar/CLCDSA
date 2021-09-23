#include<stdio.h>
long long int N;
char c;
int main(){
	c=getchar();
	while(c!='\n'){
		if(c!=' '){
			N *= 10;
			N += c-'0';
		}
		c=getchar();
	}
	printf("%d\n", N<<1);
} 