#include <stdio.h>
#include <string.h>

int main(void)
{
	int a,b,x;
	scanf("%d%d%d",&a,&b,&x);
	if(a<=x && x<=a+b){printf("YES");}
	else{printf("NO");}
	return 0;
} 