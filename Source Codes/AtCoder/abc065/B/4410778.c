#include <stdio.h>

int main(void){

	int N;
	int a[100000];

	scanf("%d", &N);

	int i;
	
	for(i = 1; i <= N; i++){
		scanf("%d", &a[i]);
	}

	int X = 1;
	int count = 0;

	while(X != 2){				
		count++;
		X = a[X];

		if(count >= N){
			printf("-1\n");
			return 0;
	
		}
		
	}

	printf("%d\n", count);

	return 0;

} 