#include <stdio.h>
#include <stdlib.h>
#define size (int)(1e5)

int max(int a, int b){
	if(a > b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
	int N, i;
	scanf("%d", &N);
	int *num = (int *)malloc(sizeof(int) * size);
	for(i = 0; i < size; i++){
		num[i] = 0;
	}
	int a;
	for(i = 0; i < N; i++){
		scanf("%d", &a);
		if(a != 0){
			num[a - 1]++;
		}
		num[a]++;
		num[a + 1]++;
	}
	int ans = 0;
	for(i = 0; i < size; i++){
		ans = max(ans, num[i]);
	}
	printf("%d\n", ans);
	return 0;
} 