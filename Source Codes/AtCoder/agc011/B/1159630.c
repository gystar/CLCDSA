#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	return *(long long int *)a-*(long long int *)b;
}
int main(void){
	int n,i,c=0;//,a[100000],s;
	long long int a[100000],s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	qsort(a,n,sizeof(long long int),cmp);
	s=a[0];
	for(i=1;i<n;i++){
		if(a[i]>2*s){
			c=i;
		}
		s+=a[i];
	}
	printf("%d\n",n-c);
	return 0;
} 