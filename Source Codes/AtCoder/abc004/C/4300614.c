#include <stdio.h>

static int numlist[6] = {1,2,3,4,5,6};

void swap(int *a,int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main(int argc, char const *argv[])
{
	long int N;
	scanf("%d",&N);
	N = N % 30;
	for (long i = 0; i < N; ++i)	swap(&numlist[i % 5 + 0], &numlist[i % 5 + 1]);
	for (long i = 0; i < 6; ++i)	printf("%d", numlist[i]);
	return 0;
} 