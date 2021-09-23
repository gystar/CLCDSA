#include <stdio.h>
#include <string.h>
int main(void){
	char s[2];
	int i,n,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		if(strchr(s,'Y')!=NULL) y++;
	}
	if(y==0) printf("Three\n");
	else printf("Four\n");
	return 0;
} 