#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
int a[100001], start[100001];
long int sum=0;

void change(int *x, int *y){
	int z;
	z = *x;
	*x = *y;
	*y = z;
}
int compare_int(const void *a, const void *b){
	return *(int*)a - *(int*)b;
}

int main(void){
	scanf("%d", &n );
	for(int i=0;i<n;i++)	scanf("%d", &a[i]);

	if(n==1)	printf("1");
	else{
		start[0] = 0;
		for(int i=1;i<n;i++){
			if(a[i] > a[i-1])	start[i] = start[i-1];
			else	start[i] = i;
		}
			
		for(int i=0;i<n;i++){
			sum += i - start[i] + 1;
		}
		printf("%lld", sum);
	}
				
	return 0;
} 