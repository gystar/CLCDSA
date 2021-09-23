#include <stdio.h>
int main(void){
	int a,b,c,d,m;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<=b){
		if(c<=d) m=a+c;
		else m=a+d;
	}
	else{
		if(c<=d) m=b+c;
		else m=b+d;
	}
	printf("%d\n",m);
	return 0;
} 