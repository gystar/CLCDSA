#include <stdio.h>

int main(){
	long int N, M;
	scanf("%ld %ld",&N, &M);

	long int a[N], b[N];
	int flag[2][N];
	int k = 0;
	for(int i = 0; i < N; i++){
		flag[0][i] = 0;
		flag[1][i] = 0;
	}
	for(int i = 0; i < M; i++){
		long long int buf1, buf2;
		scanf("%ld %ld", &buf1, &buf2);
		if(buf1 == 1){
			a[k] = buf1;
			b[k] = buf2;
			flag[0][b[k]-1] = 1;
			k++;
		} else if(buf2 == N) {
			a[k] = buf1;
			b[k] = buf2;
			flag[1][a[k]-1] = 1;
			k++;
		}
	}

	for(int i = 0; i < M; i++){
		if(flag[0][i] == 1 && flag[1][i] == 1){
			printf("POSSIBLE\n");
			return 0;
		}
	}

	printf("IMPOSSIBLE\n");

	return 0;
} 