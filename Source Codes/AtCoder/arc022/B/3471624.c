#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
#define D_PASTRY_MAX	100000									// ?????
#define D_TASTE_MAX		100000									// ????

// ????
static FILE *szpFpI;											// ??
static int si1Taste[D_PASTRY_MAX + 5];							// ?[??]
static int si1PNo[D_TASTE_MAX + 5];								// ????[?]

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
	memset(si1PNo, 0, sizeof(si1PNo));							// ????[?]

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
	int liPCnt;
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d", &liPCnt);

	// ? - ??
	int liMax = 0;
	int liSNo = 1;
	for (i = 1; i <= liPCnt; i++) {
		fscanf(szpFpI, "%d", &si1Taste[i]);

		// ????[?] - ????
		if (si1PNo[si1Taste[i]] == 0) {								// ??(??)
			int liLen = i - liSNo + 1;
			if (liMax < liLen) {
				liMax = liLen;
			}
		}
		else {														// ??(?????)

			// ?????
			for ( ; liSNo <= si1PNo[si1Taste[i]]; liSNo++) {
				si1PNo[si1Taste[liSNo]] = 0;
			}
		}

		// ????[?] - ???
		si1PNo[si1Taste[i]] = i;
	}
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);

	// ?? - ???
	sprintf(lc1Out, "%d\n", liMax);

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