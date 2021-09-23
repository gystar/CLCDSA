#include <stdio.h>
int main(void){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if((abs(c-b)<=d && abs(b-a)<=d) || abs(c-a)<=d) printf("Yes\n");
	else printf("No\n");
	return 0;
} 