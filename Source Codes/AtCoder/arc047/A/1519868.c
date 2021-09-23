#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, L, i, k = 1, ans = 0;
	scanf("%d%d", &N, &L);
	char *S = (char *)malloc(sizeof(char) * (N + 1));
	scanf("%s", S);
	for(i = 0; i < N; i++){
		if(S[i] == '+'){
			k++;
			if(k > L){
				k = 1;
				ans++;
			}
		}
		else{
			k--;
		}
	}
	printf("%d\n", ans);
	return 0;
} 