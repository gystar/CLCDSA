#include <stdio.h>

int main(void){
	int a,b,c,d,res=0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	if(a < b){
		res += a;
	}else{
		res += b;
	}
	if(c < d){
		res += c;
	}else{
		res += d;
	}
	printf("%d\n",res);
	return 0;
} 