#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
#define D_ARRAY_SIZE	10										// ?????

// ????
static FILE *szpFpI;											// ??
static int si2Array[D_ARRAY_SIZE][D_ARRAY_SIZE];				// ??

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
	int liSum = 0;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			si2Array[i][j] = i * j;
			liSum += si2Array[i][j];
		}
	}

	// ? - ??
	int liVal;
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d", &liVal);

	// ???
	liVal = liSum - liVal;

	// ??
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if (si2Array[i][j] == liVal) {
				sprintf(lc1Out, "%d x %d\n", i, j);
#ifdef D_TEST
				fgets(lc1Buf, sizeof(lc1Buf), szpFpA);
				if (strcmp(lc1Buf, lc1Out)) {
					siRes = -1;
				}
#else
				printf("%s", lc1Out);
#endif
			}
		}
	}

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