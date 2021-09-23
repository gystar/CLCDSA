#include <stdio.h>
#include <string.h>

int main(void){
	char str[55];
	scanf("%s", str);
	if(str[strlen(str) - 1] == 'T')
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
} 