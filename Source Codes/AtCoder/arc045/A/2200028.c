#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i;
	char *S = (char *)malloc(sizeof(char) * 101);
	gets(S);
	if(S[0] == 'L'){
		printf("<");
		i = 5;
	}
	if(S[0] == 'R'){
		printf(">");
		i = 6;
	}
	if(S[0] == 'A'){
		printf("A");
		i = 8;
	}
	for(i = i; S[i - 1] != '\0'; i = i){
		if(S[i] == 'L'){
			printf(" <");
			i += 5;
		}
		if(S[i] == 'R'){
			printf(" >");
			i += 6;
		}
		if(S[i] == 'A'){
			printf(" A");
			i += 8;
		}
	}
	printf("\n");
	return 0;
} 