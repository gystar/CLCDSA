#include <stdio.h>
#include <string.h>

int main(void) {
	char str[128];
	int a,b,c,d,i,len;
	
	scanf("%s %d %d %d %d",str,&a,&b,&c,&d);
	len = strlen(str);
	str[len] = '\n';
	str[len+1] = '\0';
	
	for (i = 0;str[i] != '\0';i++){
		if (i == a || i == b || i == c || i == d) {
			printf("\"");
		}
		printf("%c",str[i]);
	}

	return 0;
} 