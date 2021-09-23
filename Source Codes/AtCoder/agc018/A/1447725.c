#include<stdio.h>


int main()
{
	long n,k,x,y,z,m;
	long i, j;
	scanf("%ld %ld", &n,&k);
	for (i = 0; i < n; i++) {
		if (i == 0) {
			scanf("%ld", &y);
			m = y;
			continue;
		}
		scanf("%ld",&x);
		if (x>m) {
			m = x;
		}
		if (x < y) {
			z = y;
			y = x;
			x = z;
		}
		while (x%y != 0) {
			z = y;
			y = x%y;
			x = z;
		}
	}
	if (k%y == 0&&k<=m) {
		printf("POSSIBLE");
		}else{
		printf("IMPOSSIBLE");
	}
    return 0;
} 