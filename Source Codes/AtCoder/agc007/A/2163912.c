#include <stdio.h>
#include <stdlib.h>

int main(){
	int H, W, i, j, sum = 0;
	scanf("%d%d", &H, &W);
	char **A = (char **)malloc(sizeof(char *) * H);
	for(i = 0; i < H; i++){
		A[i] = (char *)malloc(sizeof(char) * (W + 1));
		scanf("%s", A[i]);
		for(j = 0; j < W; j++){
			if(A[i][j] == '#'){
				sum++;
			}
		}
	}
	if(sum == H + W - 1){
		printf("Possible\n");
	}
	else{
		printf("Impossible\n");
	}
	return 0;
} 