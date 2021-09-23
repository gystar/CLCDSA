#include<stdio.h>
int a, b, c;
int main(){
	scanf("%d%d%d", &a, &b, &c);
	if(a>b){a^=b; b^=a; a^=b;}
	if(a>c){a^=c; c^=a; a^=c;}
	if(b>c){b^=c; c^=b; b^=c;}
	printf("%d\n", b);
} 