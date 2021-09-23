#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, i, j, R = 0, B = 0;
	scanf("%d", &N);
	char **S = (char **)malloc(sizeof(char *) * N);
	for(i = 0; i < N; i++){
		S[i] = (char *)malloc(sizeof(char) * (N + 1));
		scanf("%s", S[i]);
		for(j = 0; j < N; j++){
			if(S[i][j] == 'R'){
				R++;
			}
			else if(S[i][j] == 'B'){
				B++;
			}
		}
	}
	if(R > B){
		printf("TAKAHASHI\n");
	}
	else if(R < B){
		printf("AOKI\n");
	}
	else{
		printf("DRAW\n");
	}
	return 0;
} 