#include <stdio.h>

int main(){
	int N, i;
	char S[101];
	scanf("%s", S);
	for(i = 0; S[i] != '\0'; i++){}
	N = i;
	for(i = 0; i < N; i++){
		if(S[i] != S[N - 1 - i]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
} 