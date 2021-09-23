#include<stdio.h>

int main() {
	
	int cnt, i, j, n, m, c, a[20][20], b[20], ans[20] = {0};
	cnt = 0;
	scanf("%d%d%d", &n, &m,&c);
	for (i = 0; i < m; i++) scanf("%d",&b[i]);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
			ans[i]=ans[i]+ a[i][j]*b[j];
		}
		if (ans[i] + c > 0)cnt++;
	}
	printf("%d", cnt);


	
	
	
	return 0;
	
} 