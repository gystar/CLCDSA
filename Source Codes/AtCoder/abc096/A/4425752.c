#include <stdio.h>
int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==b) printf("%d\n",a);
	else if(a<b) printf("%d\n",a);
	else if(a>b) printf("%d\n",a-1);
	return 0;
} 