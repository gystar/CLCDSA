#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ????
static FILE *szpFpI;											// ??

// ???? - ????
#ifdef D_TEST
	static int siRes;
	static FILE *szpFpA;
#endif

// ??
int
fJudge(
	long long plVal				// <I> ?
)
{
	int i;

	// ???
	int liMax = (int)sqrt((double)plVal);
	long long llSum;
	if ((long long)liMax * (long long)liMax == plVal) {
		llSum = 1 - liMax;
	}
	else {
		llSum = 1;
	}

	// ?????
	for (i = 2; i <= liMax; i++) {
		if (plVal % i == 0) {
			llSum += (long long)i;
			llSum += (long long)(plVal / i);
		}
	}

	// ??
	if (plVal > llSum) {
		return -1;
	}
	else if (plVal < llSum) {
		return 1;
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
	long long llVal;
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%lld", &llVal);

	// ??
	int liRet = fJudge(llVal);

	// ?? - ???
	switch (liRet) {
	case 0:
		sprintf(lc1Out, "Perfect\n");
		break;

	case 1:
		sprintf(lc1Out, "Abundant\n");
		break;

	default:
		sprintf(lc1Out, "Deficient\n");
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