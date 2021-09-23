#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

int main(void){
	
	long N, x, eat;
	
	scanf("%ld%ld", &N, &x);
	
	long a[N];
	
	long i;
	eat = 0;
	
	for(i=0;i<N;i++){
		scanf("%ld", a+i);
		if (i == 0){
			eat += max(0, a[0]-x);
			a[0] = min(x, a[0]);
		} else {
			int nowe = max(0, a[i-1]+a[i]-x);
			eat += nowe;
			a[i] -= nowe;
		}
	}
	
	printf("%ld\n", eat);
	return 0;
} 