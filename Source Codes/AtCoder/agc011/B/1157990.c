#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ull;

int comp(const void *p1,const void *p2);

int main(void){
	ull *creature,*sum,n,i;
	int ans=1;
	scanf("%d",&n);
	creature=(ull *)calloc(n,sizeof(ull));
	sum=(ull *)calloc(n,sizeof(ull));
	for(i=0;i<n;i++) scanf("%llu",&creature[i]);
	
	qsort(creature,n,sizeof(ull),comp);
	for(i=0;i<n;i++) sum[i]=(i==0)?creature[i]:(creature[i]+sum[i-1]);
	for(i=n-1;i>0;i--){
		if(creature[i]<=sum[i-1]*2) ans++;
		else break;
	}
	
	printf("%llu\n",ans);
	
	free(sum);
	free(creature);
	return 0;
}

int comp(const void *p1,const void *p2){
	int n1,n2;
	n1=*((const int *)p1);
	n2=*((const int *)p2);
	return n1-n2;
} 