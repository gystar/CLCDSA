#include <stdio.h>
#include <math.h>

int main(void){
	int N;
	int T,A;
	int i;
	int H[1000];
	double y = 0.006;
	double min=11111111,temp;
	int ans=1;
	scanf("%d",&N);
	scanf("%d %d",&T,&A);
	for(i=0;i<N;i++){
		scanf("%d",&H[i]);
		temp = (double)A - ((double)T - 0.006 * (double)H[i]);//temp?????
		temp = fabs(temp);
		if ( temp < min ){
			min = temp;
			ans = i;
		}
	}
	printf("%d",ans+1);
	return 0;
} 