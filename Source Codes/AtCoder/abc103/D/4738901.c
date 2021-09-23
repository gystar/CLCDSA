#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int a,b;
}data;

int compare(const void *x, const void *y){return (((data*)x)->b - ((data*)y)->b);}

int main(void){
	int N,M,i;
	scanf("%d%d",&N,&M);
	data island[M];
	for(i=0;i<M;i++)scanf("%d%d",&island[i].a,&island[i].b);
		
	qsort(island,M, sizeof(data), compare);
	
	int p = island[0].b-1,ans=1;
	for(i=1;i<M;i++){
		if(p < island[i].a){
			p = island[i].b-1;
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
} 