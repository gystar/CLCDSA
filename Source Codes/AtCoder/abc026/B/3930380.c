#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int desc(const void *a, const void *b) {
  return *(int *)b - *(int *)a;
}



int main(void) {
	int n,a[1005];
	double res;

	scanf("%d",&n);
	for (int i=0;i<1005;i++)a[i]=0;
	for (int i=0;i<n;i++) scanf("%d",&a[i]);

    qsort(a, n, sizeof(int), desc);
    res =0.0;
    //for (int i=0;i<n;i++) printf("%d\n",a[i]);
    for (int i=0;i<n;i++){

        if(i%2==0) res += (double)a[i]*(double)a[i];
        if(i%2==1) res -= (double)a[i]*(double)a[i];
    }
    res *= M_PI;
    printf("%lf\n",res);
	
	return 0;
} 