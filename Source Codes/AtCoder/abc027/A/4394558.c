#include <stdio.h>
int main(void){
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c) printf("%d\n",a);
	else if(a==b) printf("%d\n",c);
	else if(b==c) printf("%d\n",a);
	else printf("%d\n",b);
	return 0;
} 