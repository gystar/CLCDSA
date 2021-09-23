#include <stdio.h>

int main(void){
	int n,k,x,y,res=0;
	scanf("%d",&n);
	scanf("%d",&k);
	scanf("%d",&x);
	scanf("%d",&y);
	if(n > k){
		res += k*x + (n-k)*y;
	}else{
		res += x*n;
	}
	printf("%d\n",res);
} 