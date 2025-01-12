#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
#define D_COINT_MAX		100										// ??????

// ????? - ?????
typedef struct Coin {
	int miVal;													// ?
	int miCnt;													// ??????????
} Coin;

// ????
static FILE *szpFpI;											// ??
static Coin sz1Coin[D_COINT_MAX];								// ???
static int siCCnt;												// ????

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
	int i, j;
	char lc1Buf[1024], lc1Out[1024];

	// ??? - ???
	memset(sz1Coin, 0, sizeof(sz1Coin));						// ???

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
	sscanf(lc1Buf, "%d", &siCCnt);

	// ??? - ??
	for (i = 0; i < siCCnt; i++) {
		fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
		sscanf(lc1Buf, "%d", &sz1Coin[i].miVal);
	}

	// ?????????? - ???
	for (i = 0; i < siCCnt; i++) {
		for (j = 0; j < siCCnt; j++) {
			if (i != j) {
				if (sz1Coin[i].miVal % sz1Coin[j].miVal == 0) {
					sz1Coin[i].miCnt++;
				}
			}
		}
	}

	// ??? - ????????????????
	double ldSum = (double)siCCnt;
	for (i = 0; i < siCCnt; i++) {
		if (sz1Coin[i].miCnt % 2 == 0) {												// ???
			ldSum -= (double)(sz1Coin[i].miCnt / 2) / (double)(sz1Coin[i].miCnt + 1);
		}
		else {																			// ???
			ldSum -= 0.5;
		}
	}

	// ?? - ???
	sprintf(lc1Out, "%.12lf\n", ldSum);

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