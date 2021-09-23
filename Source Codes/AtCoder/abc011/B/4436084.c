#include <stdio.h>
#include <string.h>
int main(void){
	int i=1;
	char s[13];
	gets(s);
	if(s[0]>'Z') s[0]-=0x20;
	while(s[i]!='\0'){
		if(s[i]<'a') s[i]+=0x20;
		i++;
	}
	puts(s);
	return 0;
} 