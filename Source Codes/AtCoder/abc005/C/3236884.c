#include<stdio.h>
int main() {
	int sec, tako, cus, i, j;
	int sell[100], wait[100];
	scanf("%d", &sec);
	scanf("%d", &tako);
	for (i = 0; i < tako; i++) {
		scanf("%d", &sell[i]);
	}
	scanf("%d", &cus);
	for (i = 0; i < cus; i++) {
		scanf("%d", &wait[i]);
	}

	int flag = 0;

	if (cus > tako) {
		printf("no\n"); //????????????
		return 0;
	}
	else
	{
		for (i = 0; i < cus; i++) {
			for (j = i; j < tako; j++) {
				if (wait[i] - sell[j] >= 0) {
					if (wait[i] - sell[j] <= sec) {   //?????????????
						flag++;
						break;
					}
				}
			}
			if (flag <= i) {
				puts("no");
				return 0;
			}
		}
		puts("yes");
	}

	return 0;
} 