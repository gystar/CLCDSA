#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
static FILE *szpFpI;											// ??
static int siDX;												// ????? - ?
static int siDY;												// ????? - ?
static int siDH;												// ????? - ??
static int siMax;												// ???

// ???? - ????
#ifdef D_TEST
	static int siRes;
	static FILE *szpFpA;
#endif

// ??? - ??
int
fUpMax(
	int piX						// <I> ????
	, int piY					// <I> ????
	, int piH					// <I> ?????
)
{
	// ?? - ??
	int liX = siDX / piX;
	int liY = siDY / piY;
	int liH = siDH / piH;
	int liCnt = liX * liY * liH;

	// ??? - ??
	if (siMax < liCnt) {
		siMax = liCnt;
	}

	return 0;
}

// ?????
int
fMain(
	int piTNo					// <I> ????? 1?
)
{
	char lc1Buf[1024], lc1Out[1024];

	// ??? - ???
	siMax = 0;													// ???

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
	sscanf(lc1Buf, "%d%d%d", &siDY, &siDX,  &siDH);

	// ?????? - ??
	int liX, liY, liH;
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d%d%d", &liY, &liX, &liH);

	// ??? - ??
	fUpMax(liX, liY, liH);
	fUpMax(liX, liH, liY);
	fUpMax(liY, liX, liH);
	fUpMax(liY, liH, liX);
	fUpMax(liH, liX, liY);
	fUpMax(liH, liY, liX);

	// ?? - ???
	sprintf(lc1Out, "%d\n", siMax);

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