#include <stdio.h>
int main(void){
	char x[2],y[2];
	scanf("%s%s",x,y);
	if(x[0]-0x10<y[0]-0x10) printf("<\n");
	else if(x[0]-0x10>y[0]-0x10) printf(">\n");
	else printf("=\n");
	return 0;
} 