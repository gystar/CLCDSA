#include<stdio.h>

int main() {
	char s[500][500];
	int n, m, num[500][500] = {};
	scanf("%d%d",&n,&m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf(" %c", &s[i][j]);
          	if(s[i][j]=='#'){
			num[i - 1][j]++;
			num[i - 1][j - 1]++;
			num[i - 1][j + 1]++;
			num[i][j + 1]++;
			num[i][j - 1]++;
			num[i + 1][j - 1]++;
			num[i + 1][j]++;
			num[i + 1][j + 1]++;
            }
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (s[i][j] == '#') {
				printf("#");
			}
			else {
				printf("%d", num[i][j]);
			}
		}
		printf("\n");
	}
} 