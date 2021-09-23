#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	d=a<5?a:5;
	a-=d;
	printf("%d\n",d*c+a*b);
	return 0;
} 