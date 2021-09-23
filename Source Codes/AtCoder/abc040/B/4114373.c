#include <stdio.h>
#include <math.h>

int main(void){
	int n, h, w, min, m;
	scanf("%d", &n);
	min = n;
	m = (int)sqrt(n);
	for(h = 1; h <= m; h++){
		w = n / h;
		if(min > w - h + n - h * w)
			min = w - h + n - h * w;
		//printf("h:%d w:%d err:%d + %d\n", h, w, n - h * w , w - h);
	}
	printf("%d\n", min);
	return 0;
} 