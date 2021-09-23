#include <stdio.h>

int main(void){
	int c['z' - 'a' + 1];
	char str[105];
	scanf("%s", str);
	for(int i = 0; i < 'z' - 'a' + 1; i++)
		c[i] = 0;
	for(int i = 0; str[i] != '\0'; i++)
		c[str[i] - 'a']++;
	for(int i = 0; i < 'z' - 'a' + 1; i++){
		if(c[i] % 2){
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
} 