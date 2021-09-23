#include <stdio.h>
#include <string.h>

int main(void)
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if((a-c)*(a-c)<=d*d){printf("Yes");}
	else if((a-b)*(a-b)<=d*d && (b-c)*(b-c)<=d*d){printf("Yes");}
	else{printf("No");}
		return 0;
} 