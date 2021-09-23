#include <stdio.h>
#include <string.h>
int main(void){
	int i=0;
	char s[13];
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if(i==0){
			if(s[i]>'Z') s[i]-=0x20;
			continue;
		}
		else{
			if(s[i]<'a') s[i]+=0x20;
			continue;
		}
	}
	puts(s);
	return 0;
} 