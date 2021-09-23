#include <stdio.h>

#define STR_MAX	10

int main(void)
{
	char str_in[STR_MAX + 1] = {'\0'};
	char str_out[STR_MAX + 1] = {'\0'};
	char *pOut;
	int cnt;

	scanf("%s", str_in);

	pOut = str_out;
	for (cnt = 0; ((str_in[cnt] != '\0') && (cnt < STR_MAX)); cnt++) {
		if (str_in[cnt] == '0') {
			*pOut = '0';
			pOut++;
		} else if (str_in[cnt] == '1') {
			*pOut = '1';
			pOut++;
		} else if ((str_in[cnt] == 'B') && (pOut != &str_out[0])) {
			pOut--;
			*pOut = '\0';
		} else {
			;
		}
	}

	printf("%s\n", str_out);

	return 0;
} 