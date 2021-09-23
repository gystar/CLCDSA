#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, i, f = 0, ans = 0;
	scanf("%d",&N);
	int *p = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%d", &p[i]);
		p[i]--;
	}
	for(i = 0; i < N; i++){
		if(p[i] == i){
			if(f == 0){
				ans++;
				f = 1;
			}
			else{
				f = 0;
			}
		}
		else{
			f = 0;
		}
	}
	printf("%d\n", ans);
	return 0;
} 