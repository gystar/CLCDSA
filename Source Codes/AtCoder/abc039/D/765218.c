#include <stdio.h>

#define MAX 100
int H, W;

void make_image(char S1[MAX][MAX], char S2[MAX][MAX], char S3[MAX][MAX]);
int check(char S1[MAX][MAX], int i, int j);
int strc(char S1[MAX][MAX], char S2[MAX][MAX]);

int main(void)
{
	int i, j;
	char S1[MAX][MAX], S2[MAX][MAX], S3[MAX][MAX];

	scanf("%d%d", &H, &W);

	for (i = 0; i < H; i++){
		for (j = 0; j < W; j++){
			S1[i][j] = '.';
			S2[i][j] = '.';
			S3[i][j] = '.';
		}
	}

	for (i = 0; i < H; i++){
		scanf("%s", S1[i]);
	}

	make_image(S1, S2, S3);

/*	for (i = 0; i <= H + 1; i++){
		for (j = 0; j <= W + 1; j++){
			printf("%c", S3[i][j]);
		}
		putchar('\n');
	}*/

	if(strc(S1, S3)){
		printf("impossible\n");
	} else {
		printf("possible\n");
		for (i = 0; i < H; i++){
			printf("%s\n", S2[i]);
		}
	}

	return 0;
}

void make_image(char S1[MAX][MAX], char S2[MAX][MAX], char S3[MAX][MAX])
{
	int i, j, k, l;

	for (i = 0; i < H; i++){
		for (j = 0; j < W; j++){
			if(!check(S1, i, j)){
				S2[i][j] = '#';
				for(k = i - 1; k <= i + 1; k++){
					for (l = j - 1; l <= j + 1; l++){
						if (k >= 0 && k < H && l >= 0 && l < W){
							S3[k][l] = '#';
						}
					}
				}
			}	
		}
	}
}

int check(char S1[MAX][MAX], int h, int w)
{
	int dh, dw;

	for (dh = -1; dh <= 1; dh++){
		for (dw = -1; dw <= 1; dw++){
			if (h + dh >= 0 && h + dh < H && w + dw >= 0 && w + dw < W && S1[h + dh][w + dw] == '.') return 1;
		}
	}

	return 0;
}

int strc(char S1[MAX][MAX], char S3[MAX][MAX])
{
	int i, j;

	for (i = 0; i < H; i++){
		for (j = 0; j < W; j++){
			if(S1[i][j] != S3[i][j]){
				return 1;
			}	
		}
	}
	return 0;
} 