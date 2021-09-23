#include <stdio.h>
#include <string.h>
int main(void){
	char s[101];
	scanf("%s",s);
	int i,num[26]={0};
	for(i=0;i<strlen(s);i++){
		num[s[i]-'A']++;
	}
	printf("%d %d %d %d %d %d\n",num[0],num[1],num[2],num[3],num[4],num[5]);
	
	
	return 0;
} 