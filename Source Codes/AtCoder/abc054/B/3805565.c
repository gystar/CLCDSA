#include<stdio.h>
int N, M, L, f, lx, ly, x, y, i;
char A[51][51], B[51][51];
int main(void){
	scanf("%d %d\n", &N, &M);
	for(i=0; i<N; i++){
		scanf("%s\n", A[i]);
	}
	for(i=0; i<M; i++){
		scanf("%s\n", B[i]);
	}
	L=N-M+1;
	for(ly=0; ly<L; ly++){
		for(lx=0; lx<L; lx++){
			f=1;
			for(int y=0;y<M;++y){
				for(int x=0;x<M;++x){
					if(A[ly+y][lx+x]!=B[y][x]){f=0;}
				}
			}
			if(f){
				printf("Yes\n");
				return 0;
			}
		}
	}
	printf("No\n");
	return 0;
} 