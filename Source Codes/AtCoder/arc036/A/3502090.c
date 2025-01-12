#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
#define D_DAY_MAX		100000									// ????

// ????
static FILE *szpFpI;											// ??
static int si1Sleep[D_DAY_MAX];									// ????

// ???? - ????
#ifdef D_TEST
	static int siRes;
	static FILE *szpFpA;
#endif

// ???? - ??
int
fGetDay(
)
{
	int i;
	char lc1Buf[1024];

	// ?????? - ??
	int liDCnt, liBase;
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d%d", &liDCnt, &liBase);

	// ?????
	int liSum = 0;
	for (i = 0; i < 2; i++) {
		fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
		sscanf(lc1Buf, "%d", &si1Sleep[i]);

		// ??
		liSum += si1Sleep[i];
	}

	// ?????
	for (i = 2; i < liDCnt; i++) {
		fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
		sscanf(lc1Buf, "%d", &si1Sleep[i]);

		// ??
		liSum += si1Sleep[i];
		if (liSum < liBase) {
			return i + 1;
		}
		liSum -= si1Sleep[i - 2];
	}

	return -1;
}

// ?????
int
fMain(
	int piTNo					// <I> ????? 1?
)
{
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

	// ???? - ??
	int liDay = fGetDay();

	// ?? - ???
	sprintf(lc1Out, "%d\n", liDay);

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