#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
#define D_WORD_MAX		100										// ?????
#define D_WORD_LEN		20										// ???

// ????
static FILE *szpFpI;											// ??
static char sc2Word[D_WORD_MAX][D_WORD_LEN + 5];				// ??
static int siWCnt;												// ???

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
	int i, j;

	for (i = 1; i < siWCnt; i++) {

		// ??????????????
		int liLen = strlen(sc2Word[i - 1]);
		if (sc2Word[i - 1][liLen - 1] != sc2Word[i][0]) {
			return i % 2;
		}

		// ????????
		for (j = 0; j < i; j++) {
			if (!strcmp(sc2Word[i], sc2Word[j])) {
				return i % 2;
			}
		}
	}

	return -1;
}

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

	// ??? - ??
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d", &siWCnt);

	// ?? - ??
	for (i = 0; i < siWCnt; i++) {
		fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
		sscanf(lc1Buf, "%s", sc2Word[i]);
	}

	// ??
	int liRet = fJudge();

	// ?? - ???
	switch (liRet) {
	case 1:
		sprintf(lc1Out, "WIN\n");
		break;
	case 0:
		sprintf(lc1Out, "LOSE\n");
		break;
	default:
		sprintf(lc1Out, "DRAW\n");
		break;
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