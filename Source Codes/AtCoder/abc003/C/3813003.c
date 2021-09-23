#include<stdio.h>
int compare_int(const void *a, const void *b);
int N, K, R[100], i;
double ans;

int main(){
	scanf("%d%d", &N, &K);
	for(i=0; i<N; i++){
		scanf("%d", R+i);
	}
    qsort(R, N, sizeof(int), compare_int);
	for(i=N-K; i<N; i++){
		ans = (ans+R[i])/2;
	}
	printf("%lf\n", ans);
}

int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
} 