#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,lon;
	char x;
	char s[51];
	scanf("%c %s",&x,s);
	
	lon=strlen(s);
	
	for(i=0;i<lon;i++){
		if(s[i]!=x){
			printf("%c",s[i]);
		}
	}
	
	printf("\n");
	return 0;
} 