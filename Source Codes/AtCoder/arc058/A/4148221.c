#include<stdio.h>
#include<math.h>
#include <stdbool.h>

//???????
int GetDigit(int num) {
	int digit = 0;
	while (num != 0) {
		num /= 10;
		digit++;
	}
	return digit;
}

int main() {
	int N, K;
	scanf("%d%d", &N, &K);
	int *D = (int *)malloc(sizeof(int)*K);
	for (int i = 0; i < K; i++)
	{
		scanf("%d", &D[i]);
	}

	//N????????????????NG????N???????
	bool jadge = false;
	int l, j;
	while (jadge == false) {
		//???????
		int dig = GetDigit(N);
		int *a = (int *)malloc(sizeof(int)*dig);
		//????????
		for (int i = 0; i < dig; i++)
		{
			a[i] = (int)(N / pow(10, (double)i)) % 10;
			//puts("a[i]");
			//printf("%d ", a[i]);
			//puts("\n");
		}

		int ng = 0;
		for (l = 0; l < dig; l++)
		{
			for (j = 0; j < K; j++)
			{
				if (a[l] == D[j]) {
					ng = 1;
					break;
				}
			}
			if (ng) {
				N++;
				break;
			}
		}
		if (l == dig && j == K && ng == 0) {
			jadge = true;
			//puts("N");
			printf("%d ", N);
			puts("\n");
		}
	}


	return 0;
} 