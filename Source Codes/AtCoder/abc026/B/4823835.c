#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare_int(const void *a, const void *b){return *(int*)b - *(int*)a;}
int main(void){
	int N,i;
	scanf("%d",&N);
	int r[N];
	double ans,R=0;
	for(i=0;i<N;i++)scanf("%d",&r[i]);
	qsort(r,N,sizeof(int), compare_int);
	for(i=0;i<N;i++){
		if(i%2==0){
			R += r[i]*r[i];
		}else{
			R -= r[i]*r[i];
		}
	}
	ans = M_PI*R;
	printf("%.20lf\n",ans);
	return 0;
} 