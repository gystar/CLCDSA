#include <stdio.h>
#include <string.h>
int main(){
	char buf[256];
	scanf("%s",buf);
	//printf("%spp\n",buf);
	char *p;
	p = strcat(buf,"pp");
	printf("%s\n",buf);
	return 0;
 } 