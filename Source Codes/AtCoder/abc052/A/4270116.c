#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int x,y;
	x=a*b;
	y=c*d;
	if(x>y){
		printf("%d",x);
	}else{
		printf("%d",y);
	}
	return 0;
} 