#include <stdio.h>
#include <stdlib.h>
#define int long long
#define inf (int)(1e18)

int min(int a, int b){
	return a <= b ? a : b;
}

signed main(){
	int N, s, t, i, j, k, ans = 0;
	scanf("%lld", &N);
	int *a = (int *)malloc(sizeof(int) * N);
	int *b = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%lld", &a[i]);
	}
	for(i = 0; i < N; i++){
		scanf("%lld", &b[i]);
	}
	int **dis = (int **)malloc(sizeof(int *) * 51);
	for(i = 0; i <= 50; i++){
		dis[i] = (int *)malloc(sizeof(int) * 51);
	}

	for(i = 0; i <= 50; i++){
		dis[i] = (int *)malloc(sizeof(int) * 51);
		for(j = 0; j <= 50; j++){
			dis[i][j] = i == j ? 0 : inf;
		}
	}
	for(i = 0; i <= 50; i++){
		for(j = 1; j <= 50; j++){
			dis[i][i % j] = min(dis[i][i % j], (int)1 << j);
		}
	}
	for(k = 0; k <= 50; k++){
		for(i = 0; i <= 50; i++){
			for(j = 0; j <= 50; j++){
				dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
			}
		}
	}
	for(i = 0; i < N; i++){
		if(dis[a[i]][b[i]] == inf){
			printf("-1\n");
			return 0;
		}
	}

	for(s = 50; s >= 0; s--){
		for(t = 0; t <= s; t++){

			for(i = 0; i <= 50; i++){
				for(j = 0; j <= 50; j++){
					dis[i][j] = i == j ? 1 : 0;
				}
			}
			for(i = 0; i <= 50; i++){
				for(j = 1; j <= 50; j++){
					if((ans & ((int)1 << j)) != 0 || j <= t){
						dis[i][i % j] = 1;
					}
				}
			}
			for(k = 0; k <= 50; k++){
				for(i = 0; i <= 50; i++){
					for(j = 0; j <= 50; j++){
						dis[i][j] = dis[i][j] | (dis[i][k] & dis[k][j]);
					}
				}
			}
			int f = 1;
			for(i = 0; i < N; i++){
				if(dis[a[i]][b[i]] == 0){
					f = 0;
					break;
				}
			}
			if(f == 1){
				ans |= (int)1 << t;
				break;
			}

		}
	}

	printf("%lld\n", ans - 1);
	return 0;
} 