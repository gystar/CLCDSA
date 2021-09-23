#include <stdio.h>
int main(void){
	int a,b,c,v;
	scanf("%d%d%d",&a,&b,&c);
	if(a<=b && a<=c){
		if(b<=c) v=c*10+a+b;
		else v=b*10+a+c;
	}
	else if(b<=c && b<=a){
		if(c<=a) v=a*10+c+b;
		else v=c*10+a+b;
	}
	else{
		if(a<=b) v=b*10+a+c;
		else v=a*10+b+c;
	}
	printf("%d\n",v);
	return 0;
} 