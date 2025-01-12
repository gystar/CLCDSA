#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
#define D_TAKO_MAX		100										// ???????
#define D_CUS_MAX		100										// ????

// ????
static FILE *szpFpI;											// ??
static int siTime;												// ????
static int si1Tako[D_TAKO_MAX];									// ????
static int siTCnt;												// ?????
static int si1Cus[D_CUS_MAX];									// ?
static int siCCnt;												// ??

// ???? - ????
#ifdef D_TEST
	static int siRes;
	static FILE *szpFpA;
#endif

// ??
int
fJudge(
)
{
	int i;

	// ??????
	int liTNo = -1;
	for (i = 0; i < siCCnt; i++) {

		// ??????
		while (1) {
			liTNo++;

			// ?????????
			if (liTNo >= siTCnt) {
				return -1;
			}

			// ????????
			if (si1Cus[i] < si1Tako[liTNo]) {
				return -1;
			}

			// ????????
			if (si1Cus[i] > si1Tako[liTNo] + siTime) {
				continue;
			}

			break;
		}
	}

	return 0;
}

// ?????
int
fMain(
	int piTNo					// <I> ????? 1?
)
{
	int i, liRet;
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
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d", &siTime);

	// ????? - ??
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d", &siTCnt);

	// ???? - ??
	for (i = 0; i < siTCnt; i++) {
		fscanf(szpFpI, "%d", &si1Tako[i]);
	}
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);

	// ?? - ??
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d", &siCCnt);

	// ? - ??
	for (i = 0; i < siCCnt; i++) {
		fscanf(szpFpI, "%d", &si1Cus[i]);
	}
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);

	// ??
	liRet = fJudge();

	// ?? - ???
	if (liRet == 0) {
		sprintf(lc1Out, "yes\n");
	}
	else {
		sprintf(lc1Out, "no\n");
	}

	// ?? - ??
#ifdef D_TEST
	fgets(lc1Buf, sizeof(lc1Buf), szpFpA);
	if (strcmp(lc1Buf, lc1Out)) {
		siRes = -1;
	}
#else
	printf("%s", lc1Out);
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