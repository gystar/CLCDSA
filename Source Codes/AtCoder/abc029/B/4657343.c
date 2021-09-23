#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int i,ans=0;
	char s[11];
	for(i=0;i<12;i++){
		scanf("%s",s);
		for(int j=0;j<strlen(s);j++){
			if(s[j] == 'r'){
				ans++;
				break;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
} 