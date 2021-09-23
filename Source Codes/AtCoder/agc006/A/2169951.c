#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, i, j, f;
	scanf("%d", &N);
	char *s = (char *)malloc(sizeof(char) * (N + 1));
	char *t = (char *)malloc(sizeof(char) * (N + 1));
	scanf("%s", s);
	scanf("%s", t);
	for(i = 0; i < N; i++){
		f = 1;
		for(j = 0; i + j < N; j++){
			if(s[i + j] != t[j]){
				f = 0;
				break;
			}
		}
		if(f == 1){
			break;
		}
	}
	printf("%d\n", i + N);
/*	for(j = 0; j < i; j++){
		printf("%c", s[j]);
	}
	printf("%s\n", t);
*/	return 0;
} 