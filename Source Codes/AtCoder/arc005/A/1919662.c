/*
AtCoder Regular Contest 005 A - ??????
Ver1
??:
*/

#include<stdio.h>
#include<string.h>

//#define DEBUG1

int main() {
	int n;
	char w[50][100];
	int cnt = 0;

	scanf("%d", &n);

	while (n--){
		scanf("%s", w);
#ifdef DEBUG1
		printf("n = %d\n", n);
		printf("w = %s\n", w);
#endif
		if (strcmp(w, "TAKAHASHIKUN")==0) { cnt++; }
		if (strcmp(w, "TAKAHASHIKUN.") == 0) { cnt++; }
		if (strcmp(w, "Takahashikun") == 0) { cnt++; }
		if (strcmp(w, "Takahashikun.") == 0) { cnt++; }
		if (strcmp(w, "takahashikun") == 0) { cnt++; }
		if (strcmp(w, "takahashikun.") == 0) { cnt++; }
	}
#ifdef DEBUG1
	printf("cnt = %d\n", cnt);
#endif
	printf("%d\n", cnt);
#ifdef DEBUG1
	getch();
#endif
	return 0;
} 