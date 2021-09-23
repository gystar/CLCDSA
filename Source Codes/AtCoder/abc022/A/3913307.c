///*
#include<stdio.h>
#include<stdlib.h>

int main() {

	int day, *dif, counter = 0;
	int bbody_b, bbody_t;
	long long int weight;

	scanf("%d", &day);
	scanf("%d", &bbody_b);
	scanf("%d", &bbody_t);
	
	dif = (int*)calloc(day - 1, sizeof(int));
	if (dif == NULL)exit(0);

	scanf("%lld", &weight);

	if (bbody_b <= weight && weight <= bbody_t) {
		counter++;
	}

	for (int i = 0; i < day - 1; i++) {
		scanf("%d", &dif[i]);
	}

	for (int i = 0; i < day - 1; i++) {
		weight += dif[i];
		if (bbody_b <= weight && weight <= bbody_t) {
			counter++;
		}
	}

	printf("%d", counter);
	printf("\n");

	free(dif);

	return 0;
}
//*/ 