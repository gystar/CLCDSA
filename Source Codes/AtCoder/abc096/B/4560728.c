#include <stdio.h>

int main (void){

	int a[3];
	int i, j;
	
	for(i = 0; i < 3; i++){
		scanf("%d", &a[i]);
	}

	int K;
	scanf("%d", &K);

	int temp = 0;

	for(i = 0; i < 2; i++){
		for(j = 1; j < 3; j++){

			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

		}
	}

	int count = 0;

	while(count != K){
		a[2] = a[2] * 2;
		count++;
	}

	int ans = 0;

	ans = a[0] + a[1] + a[2];
	printf("%d\n", ans);

	return 0;

} 