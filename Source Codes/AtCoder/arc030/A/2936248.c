/*
AtCoder Regular Contest 030 A - ?????
??:
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

//#define DEBUG1
//#define DEBUG2
//#define DEBUGF

int main() {
	static int  K, tmp,i, j, ans;
	static double N, x;

	scanf("%lf %d", &N, &K);
	x = (N - 1) / 2;
	tmp = (int)ceil(x);

	if (tmp >= K) {
		printf("%s\n", "YES");
	}
	else {
		printf("%s\n", "NO");
	}

#ifdef DEBUGF
	getch();
#endif
	return 0;
} 