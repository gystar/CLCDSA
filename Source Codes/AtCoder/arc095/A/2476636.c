#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
	int N,*arr,*save;
	scanf("%d",&N);
	arr=malloc(sizeof(int)*N);
	save=malloc(sizeof(int)*N);
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
		save[i]=arr[i];
	}
	qsort(arr,N,sizeof(int),cmpfunc);
	for(int i=0;i<N;i++)
	{
		if(save[i]<=arr[N/2-1])	printf("%d\n",arr[N/2]);
		else printf("%d\n",arr[N/2-1]);
	}	
	return 0;
} 