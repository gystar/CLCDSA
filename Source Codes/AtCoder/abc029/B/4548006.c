#include <stdio.h>
#include <string.h>
int main(void){
	char s[11];
	int i,v=0;
	for(i=0;i<12;i++){
		scanf("%s",s);
		if(strchr(s,'r')!=NULL) v++;
	}
	printf("%d\n",v);
	return 0;
} 