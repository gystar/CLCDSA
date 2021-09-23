#include<stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int *X = (int *)malloc(sizeof(int)*N);
	int *Y = (int *)malloc(sizeof(int)*N);
	int *H = (int *)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++) {
		scanf("%d%d%d", &X[i], &Y[i], &H[i]);
	}

	for (int posx = 0; posx <= 100; posx++) {
		for (int posy = 0; posy <= 100; posy++) {
			int needH = -1;
			for (int i = 0; i < N; i++) {
				if (H[i] > 0) {
					int tmp = H[i] + abs(X[i] - posx) + abs(Y[i] - posy);
					if (needH == -1) {
						needH = tmp;
					}
					else if (needH != tmp) {
						needH = -2;
						break;
					}
				}
			}
			if (needH == -2) {
				continue;
			}

			for (int i = 0; i < N; i++) {
				if (H[i] == 0) {
					int tmp2 = abs(X[i] - posx) + abs(Y[i] - posy);
					if (needH > tmp2) {
						needH = -2;
						break;
					}
				}
			}
			if (needH == -2) {
				continue;
			}

			printf("%d %d %d", posx, posy, needH);
			printf("\n");
			return 0;
		}
	}
} 