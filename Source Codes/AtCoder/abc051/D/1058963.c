#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
#define sl(x) scanf("%ld", &x)
#define ss(x) scanf("%s", x)
#define pl(x) printf("%ld\n", x)
#define ps(x) printf("%s\n", x)
 
#define INF 100000000000
#define MOD 1000000007
 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

long path[401][401];
 
void init() {
	long i, j;
	
	for(i=1;i<=400;i++) {
		for(j=1;j<=400;j++) {
			if(i == j) {
				path[i][j] = 0;
			} else {
				path[i][j] = INF;
			}
		}
	}
}

int main() {
	long N, M;
	long a[1001], b[1001], c[1001];
	long i, j, k;
	long tmp;
	long ans;
	
	init();
	
	sl(N); sl(M);
	ans = M;
	for(i=1;i<=M;i++) {
		sl(a[i]); sl(b[i]); sl(c[i]);
		path[a[i]][b[i]] = c[i];
		path[b[i]][a[i]] = c[i];
	}
	
	for(i=1;i<=N;i++)
		for(j=1;j<=N;j++)
			for(k=1;k<=N;k++)
				path[j][k] = MIN(path[j][k], path[j][i] + path[i][k]);
	
	for(k=1;k<=M;k++) {
		/*
		for(i=1;i<=N;i++) {
			if(path[i][a[k]] + c[k] == path[i][b[k]]) {
				ans--;
				break;
			}
		}
		*/
		for(i=1;i<N;i++) {
			for(j=i+1;j<=N;j++) {
				if(path[i][j] == path[i][a[k]] + path[b[k]][j] + c[k]) {
					ans--;
					goto NEXT;
				}
			}
		}
		for(i=N;i>0;i--) {
			for(j=i-1;j>=0;j--) {
				if(path[i][j] == path[i][a[k]] + path[b[k]][j] + c[k]) {
					ans--;
					goto NEXT;
				}
			}
		}
	  NEXT:;
	}
	
	pl(ans);
	
	return 0;
} 