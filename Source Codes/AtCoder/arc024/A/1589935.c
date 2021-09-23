#include <stdio.h>
#include <stdlib.h>

int main(){
	int L, R, i, j, ans = 0;
	scanf("%d%d", &L, &R);
	int *l = (int *)malloc(sizeof(int) * L);
	for(i = 0; i < L; i++){
		scanf("%d", &l[i]);
	}
	int *r = (int *)malloc(sizeof(int) * R);
	for(j = 0; j < R; j++){
		scanf("%d", &r[j]);
	}
	for(i = 0; i < L; i++){
		for(j = 0; j < R; j++){
			if(l[i] == r[j]){
				l[i] = -1;
				r[j] = -1;
				ans++;
				break;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
} 