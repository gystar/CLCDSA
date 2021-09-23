#include <stdio.h>
#include <string.h>
int main(void){
	char s[11],t[11],a[]="atcoder";
	int i=0;
	scanf("%s%s",s,t);
	while(s[i]!='\0'){
		if(s[i]==t[i]) i++;
		else if(s[i]=='@' && strchr(a,t[i])!=NULL) i++;
		else if(t[i]=='@' && strchr(a,s[i])!=NULL) i++;
		else break;
	}
	if(strlen(s)==i) printf("You can win\n");
	else printf("You will lose\n");
	return 0;
} 