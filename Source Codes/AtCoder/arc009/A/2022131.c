/*
AtCoder Beginner Contest 009 A - ?????????? 
Ver1 
??:
*/

#include<stdio.h>

int main() {
	int n;
	int a[10], b[10];
	int ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}
	//printf("n=%d\n", n);
	//for (int i = 0; i < n; i++) {
	//	printf("a[%d]=%d\nb[%d]=%d\n", i,a[i], i,b[i]);
	//}
	for (int i = 0; i < n; i++) {
		ans = ans + a[i] * b[i];
	}
	ans = ans *1.05;
	printf("%d\n", ans);
	//getch();
	return 0;
} 