/*
AtCoder Regular Contest 014  A - ??????????????????????????? ??:
*/

#include<stdio.h>

//#define DEBUG1
//#define DEBUGF

//int max(int a, int b) {
//	return a >= b ? a : b;
//}

int main() {
	int n, ans;
	scanf("%d", &n);
#ifdef DEBUG1
#endif
	ans = n % 2;
	if(ans!=0){
	printf("%s\n", "Red");
}
	else {
		printf("%s\n", "Blue");
	}
#ifdef DEBUGF
	getch();
#endif
	return 0;
} 