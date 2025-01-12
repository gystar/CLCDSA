#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
#define D_FLOWER_MAX	100										// ????

// ????
static FILE *szpFpI;											// ??
static int si1Now[D_FLOWER_MAX];								// ????
static int si1Goal[D_FLOWER_MAX];								// ????
static int siFCnt;												// ??

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

	// ??? - ???
	memset(si1Now, 0, sizeof(si1Now));							// ????

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

	// ?? - ??
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d", &siFCnt);

	// ?? - ??
	for (i = 0; i < siFCnt; i++) {
		fscanf(szpFpI, "%d", &si1Goal[i]);
	}
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);

	// ?? - ??
	int liCnt = 0;
	int liSNo = 0;
	while (liSNo < siFCnt) {

		// ????
		if (si1Now[liSNo] >= si1Goal[liSNo]) {
			liSNo++;								// ??
			continue;
		}

		// ?? - ??
		int liENo = liSNo;
		for (i = liENo + 1; i < siFCnt; i++) {
			if (si1Now[i] < si1Goal[i]) {
				liENo = i;
			}
			else {
				break;
			}
		}

		// ???
		liCnt++;
		for (i = liSNo; i <= liENo; i++) {
			si1Now[i]++;
		}
	}

	// ?? - ???
	sprintf(lc1Out, "%d\n", liCnt);

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