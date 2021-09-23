#include<stdlib.h>
#include<string.h>

char s[100010];
int main(){
	scanf("%s",s);
	int n=strlen(s);
	puts((s[0]==s[n-1])^(n%2)?"First":"Second");
	return 0;
} 