#include <stdio.h>
int main(void){
	int a,b,x;
	scanf("%d%d%d",&a,&b,&x);
	if(x>=a && x-a<b) printf("YES\n");
	else printf("NO\n");
	return 0;
} 