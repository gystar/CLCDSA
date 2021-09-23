#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, N;
	char *s = (char *)malloc(sizeof(char) * 1001);
	scanf("%s", s);
	for(i = 0; s[i] != '\0'; i++){}
	N = i;
	for(i = 0; i < N; i++){
		if(s[i] != '*' && s[N - 1 - i] != '*' && s[i] != s[N - 1 - i]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
} 