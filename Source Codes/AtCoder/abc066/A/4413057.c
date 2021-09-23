#include <stdio.h>
int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b<=b+c && a+b<=a+c) printf("%d\n",a+b);
	else if(b+c<=b+a && b+c<=c+a) printf("%d\n",b+c);
	else printf("%d\n",c+a);
	return 0;
} 