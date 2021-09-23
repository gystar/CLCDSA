#include <stdio.h>
#include <stdlib.h>
int desc(const void *p,const void *q){ 
	if(*(double*)p > *(double*)q ) return 1;
	if(*(double*)p < *(double*)q ) return -1;
	return 0;
	}

int main(void){
	int N,K;
	double T=0;
	int i;
	scanf("%d %d",&N,&K);
	double R[N];
	
	for(i=0;i<N;i++){
		scanf("%lf",&R[i]);
	}
	qsort(R,sizeof(R)/sizeof(double),sizeof(double),desc);
	
	for(i=N-K;i<N;i++){
		T = (T + R[i]) / 2;
	}

	printf("%f\n",T);
	return 0;
} 