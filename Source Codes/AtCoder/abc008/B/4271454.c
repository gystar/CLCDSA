#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, i, j, k;
	scanf("%d", &N);
	char **S = (char **)malloc(sizeof(char *) * N);
	int *count = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		S[i] = (char *)malloc(sizeof(char) * 51);
		scanf("%s", S[i]);
		count[i] = 0;
	}
	for(i = 0, k = 0; i < N; i++){
		for(j = i + 1; j < N; j++){
			if(strcmp(S[i], S[j]) == 0){
				count[i]++;
			}
		}
		if(count[k] < count[i]){
			k = i;
		}
	}
	printf("%s\n", S[k]);
	return 0;
} 