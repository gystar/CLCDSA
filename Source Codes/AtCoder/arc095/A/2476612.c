#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y) x>y?x:y

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
	long N,*arr,*save;
	scanf("%ld",&N);
	arr=malloc(sizeof(long)*N);
	save=malloc(sizeof(long)*N);
	for(long i=0;i<N;i++){
		scanf("%ld",&arr[i]);
		save[i]=arr[i];
	}
	qsort(arr,N,sizeof(long),cmpfunc);
	for(long i=0;i<N;i++)
	{
		if(save[i]<=arr[N/2-1])	printf("%ld\n",arr[N/2]);
		else printf("%ld\n",arr[N/2-1]);
	}	
	free(arr);
	free(save);
	return 0;
} 