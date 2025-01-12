#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
#define D_MASS_MAX		100000									// ?????

// ????
static FILE *szpFpI;											// ??
static int si1Mass[D_MASS_MAX];									// ??
static int siMCnt;												// ???
static int siSCnt;												// ?????

// ???? - ????
#ifdef D_TEST
	static int siRes;
	static FILE *szpFpA;
#endif

// ?????
int
fMain(
	int piTNo					// <I> ????? 1?
)
{
	int i;
	char lc1Buf[1024], lc1Out[1024];

	// ?? - ???
#ifdef D_TEST
	sprintf(lc1Buf, ".\\Test\\T%d.txt", piTNo);
	szpFpI = fopen(lc1Buf, "r");
	sprintf(lc1Buf, ".\\Test\\A%d.txt", piTNo);
	szpFpA = fopen(lc1Buf, "r");
	siRes = 0;
#else
	szpFpI = stdin;
#endif

	// ????????? - ??
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d%d", &siMCnt, &siSCnt);

	// ?? - ??
	for (i = 0; i < siMCnt; i++) {
		fscanf(szpFpI, "%d", &si1Mass[i]);
	}
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);

	// ????????????????
	long long llIn = 0;
	for (i = 0; i < siSCnt; i++) {
		llIn += si1Mass[i];
	}
	long long llOut = 0;
	for (i = siSCnt; i < siMCnt; i++) {
		if (si1Mass[i] > 0) {
			llOut += si1Mass[i];
		}
	}
	long long llMax = llOut;
	if (llIn > 0) {
		llMax += llIn;
	}

	// ????
	for (i = 0; i < siMCnt - siSCnt; i++) {
		llIn -= si1Mass[i];
		llIn += si1Mass[i + siSCnt];
		if (si1Mass[i] > 0) {
			llOut += si1Mass[i];
		}
		if (si1Mass[i + siSCnt] > 0) {
			llOut -= si1Mass[i + siSCnt];
		}
		long long llSum = llOut;
		if (llIn > 0) {
			llSum += llIn;
		}

		// ??? - ??
		if (llMax < llSum) {
			llMax = llSum;
		}
	}

	// ?? - ???
	sprintf(lc1Out, "%lld\n", llMax);

	// ?? - ??
#ifdef D_TEST
	fgets(lc1Buf, sizeof(lc1Buf), szpFpA);
	if (strcmp(lc1Buf, lc1Out)) {
		siRes = -1;
	}
#else
	printf("%s", lc1Out);
#endif

	// ??????
#ifdef D_TEST
	lc1Buf[0] = '\0';
	fgets(lc1Buf, sizeof(lc1Buf), szpFpA);
	if (strcmp(lc1Buf, "")) {
		siRes = -1;
	}
#endif

	// ???????????
#ifdef D_TEST
	fclose(szpFpI);
	fclose(szpFpA);
#endif

	// ?????
#ifdef D_TEST
	if (siRes == 0) {
		printf("OK %d\n", piTNo);
	}
	else {
		printf("NG %d\n", piTNo);
	}
#endif

	return 0;
}

int
main()
{

#ifdef D_TEST
	int i;
	for (i = D_TEST_SNO; i <= D_TEST_ENO; i++) {
		fMain(i);
	}
#else
	fMain(0);
#endif

	return 0;
} 