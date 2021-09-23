#include<stdio.h>
int main(void){
	int a[4000],b[4000],c[4000],d[4000],e[4000],N,i;
	double sum,top;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i]);
		double E=(double)e[i]*110/900;
		sum = a[i]+b[i]+c[i]+d[i]+E;
		if(top<sum){
			top = sum;
		}
	}
	printf("%f\n",top);
	return 0;
} 