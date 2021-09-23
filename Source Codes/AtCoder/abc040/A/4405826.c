#include <stdio.h>
int main(void){
	int n,x,i=0;
	scanf("%d%d",&n,&x);
	if(x>n-x) printf("%d\n",n-x);
	else printf("%d\n",x-1);
	return 0;
} 