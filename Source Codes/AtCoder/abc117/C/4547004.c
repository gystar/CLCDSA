#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b){return *(int*)a - *(int*)b;}
int main(void){
	int n,m,ans=0;
	scanf("%d %d",&n,&m);
	int x[m];
	for(int i=0;i<m;i++)scanf("%d",&x[i]);
	qsort(x, m, sizeof(int), compare_int);
	int diff[m-1];
	for(int i=0;i<m-1;i++){
		diff[i] = x[i+1] - x[i];
	}
	qsort(diff, m-1, sizeof(int), compare_int);
	for(int i=0;i<m-n;i++){
		ans += diff[i];
	}
	printf("%d",ans);
	return 0;
} 