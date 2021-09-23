#include <stdio.h>
#include <math.h>
 
int main(void) {
	int n, A[100001],i,j,sum,tmp;
	A[0] = 0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	
		sum = 0;
		for(i=1;i<=n;i++) sum += abs(A[i]-A[i-1]);
		sum += abs(A[n]);
	
	for(j=1;j<=n;j++){
		tmp = sum;
		tmp -= abs(A[j]-A[j-1]) + abs(A[j+1]-A[j]);
		tmp += abs(A[j+1]-A[j-1]);
		printf("%d\n",tmp);
	}
	return 0;
} 