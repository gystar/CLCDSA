/*
AtCoder Beginner Contest 087 A - ???? Ver1 ??:
*/

#include<stdio.h>

int main() {
	int n, m, a, b;
	int c[101];
	scanf("%d %d %d %d", &n, &m, &a, &b);
	for (int i = 1; i < m+1; i++) {
		scanf("%d", &c[i]);
	}
	//for (int i = 1; i < m+1; i++) {
	//	printf("%d\n", c[i]);
	//}
	for (int i = 1; i < m+1; i++) {
		if (n <= a) { n += b; }
		n -= c[i];
		if (n < 0) { 
			printf("%d\n", i);
			break;
		}
		else if (i==m)
		{
			printf("complete\n");
			break;
		}
	}
	//getch();
	return 0;
} 