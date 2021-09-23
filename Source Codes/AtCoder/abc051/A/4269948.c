#include<stdio.h>
#include<string.h>
int main(){
	char s[30];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]==','){
			s[i]=' ';
		}
	}
	puts(s);
} 