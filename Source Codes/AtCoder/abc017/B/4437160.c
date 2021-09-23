#include <stdio.h>
#include <string.h>
int main(void){
	char s[51];
	int i;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]!='o' && s[i]!='k' && s[i]!='u'){
			if(s[i]=='c' && s[i+1]=='h'){
				i++;
			}
			else break;
		}
	}
	if(strlen(s)!=i) printf("NO\n");
	else printf("YES\n");
	return 0;
} 