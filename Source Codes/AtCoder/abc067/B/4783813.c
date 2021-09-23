#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
	return *(int*)b-*(int*)a;
}

int main(){
	
	int N,K,l[60],i,max=0;
	
	scanf("%d%d",&N,&K);
	for(i=0;i<N;i++){
		scanf("%d",&l[i]);
	}
	
	qsort(l,N,sizeof(int),compare);
	
	
	for(i=0;i<K;i++){
		max+=l[i];
		
	}
	
	printf("\n%d\n\n",max);
	
	
	return 0;
} 