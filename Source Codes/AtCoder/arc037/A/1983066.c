#include <stdio.h>

int main(){
	int N, m, i, ans = 0;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		scanf("%d", &m);
		if(m < 80){
			ans += 80 - m;
		}
	}
	printf("%d\n", ans);
	return 0;
} 