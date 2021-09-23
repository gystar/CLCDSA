#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	char X;
	scanf("%c\n", &X);
	char *S = (char *)malloc(sizeof(char) * 51);
	scanf("%s", S);
	for(i = 0; S[i] != '\0'; i++){
		if(S[i] != X){
			printf("%c", S[i]);
		}
	}
	printf("\n");
	return 0;
} 