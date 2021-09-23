#include <stdio.h>

int main()
{
	char S[11];
	scanf("%s", S);
	int i;
	for (i = 0; S[i] != '\0'; i++) {
		if (S[i] >= '0' && S[i] <= '9' && !(S[i+1] >= '0' && S[i+1] <= '9')){
			printf("%c\n", S[i]);
			break;
		} else if (S[i] >= '0' && S[i] <= '9' &&(S[i+1] >= '0' && S[i+1] <= '9')) {
			printf("%c%c\n", S[i], S[i+1]);
			break;
		
	}
	}
	return 0;
} 