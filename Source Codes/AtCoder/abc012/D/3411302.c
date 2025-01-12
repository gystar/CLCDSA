#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
#define D_BUS_MAX		300										// ??????
#define D_TIME_MAX		(1000 * D_BUS_MAX)						// ????

// ????
static FILE *szpFpI;											// ??
static int siBCnt;												// ????
static int si2Time[D_BUS_MAX + 5][D_BUS_MAX + 5];				// ??????

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
	int i, j, k;
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

	// ???????? - ??
	int liMCnt;
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d%d", &siBCnt, &liMCnt);

	// ?????? - ???
	for (i = 1; i <= siBCnt; i++) {
		for (j = 1; j <= siBCnt; j++) {
			if (i == j) {
				si2Time[i][j] = 0;
			}
			else {
				si2Time[i][j] = D_TIME_MAX;
			}
		}
	}

	// ?? - ??
	for (i = 0; i < liMCnt; i++) {
		int liFNo, liMNo, liTime;
		fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
		sscanf(lc1Buf, "%d%d%d", &liFNo, &liMNo, &liTime);
		si2Time[liFNo][liMNo] = liTime;
		si2Time[liMNo][liFNo] = liTime;
	}

	// ?????? - ??
	for (i = 1; i <= siBCnt; i++) {
		for (j = 1; j <= siBCnt; j++) {
			for (k = 1; k <= siBCnt; k++) {

				// ??????
				int liSum = si2Time[k][i] + si2Time[i][j];

				// ?????? - ??
				if (si2Time[j][k] > liSum) {
					si2Time[j][k] = liSum;
				}
			}
		}
	}

	// ?????? - ??
	int liMin = INT_MAX;
	for (i = 1; i <= siBCnt; i++) {

		// ??????????
		int liMax = 0;
		for (j = 1; j <= siBCnt; j++) {
			if (liMax < si2Time[i][j]) {
				liMax = si2Time[i][j];
			}
		}

		// ?????? - ??
		if (liMin > liMax) {
			liMin = liMax;
		}
	}

	// ?? - ???
	sprintf(lc1Out, "%d\n", liMin);

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