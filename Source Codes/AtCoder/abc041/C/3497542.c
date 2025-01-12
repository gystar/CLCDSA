#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int a;
	int tmp;
} data;

int compare(const void *x, const void *y){
	return (((data*)y)->a - ((data*)x)->a);
}

int main(void){
	int n,i;
	scanf("%d",&n);
	data ai[n];
	for(i=0;i<n;i++){
		scanf("%d",&ai[i].a);
		ai[i].tmp=i+1;
	}
	qsort(ai,n , sizeof(data), compare);
	for(i=0;i<n;i++)printf("%d\n",ai[i].tmp);
	
	return 0;
} 