#include <stdio.h>

int main(void)
{
	int a,b,c,money;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c){
		money=a*10+b+c;
	}else if(b>c){
		money=b*10+a+c;
	}else{
		money=c*10+a+b;
	}
	
	printf("%d",money);
	
	return 0;
} 