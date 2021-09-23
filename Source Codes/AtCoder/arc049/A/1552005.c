#include <stdio.h>

int main(){
	char S[101];
	int A, B, C, D, i;
	scanf("%s", S);
	scanf("%d%d%d%d", &A, &B, &C, &D);
	for(i = 0; ; i++){
		if(i == A || i == B || i == C || i == D){
			printf("%c", '"');
		}
		if(S[i] == '\0'){
			printf("\n");
			return 0;
		}
		printf("%c", S[i]);
	}
} 