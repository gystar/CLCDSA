#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
int main(void){
	int n,c,k,t[100000],i,ans=0,tmp,cnt;
	scanf("%d %d %d",&n,&c,&k);
	for(i=0;i<n;i++){
		scanf("%d",&t[i]);
	}
	qsort(t,n,sizeof(int),cmp);
	for(i=0;i<n;){
		ans++;
		cnt=1;
		tmp=t[i]+k;
		for(i++;cnt<c&&t[i]<=tmp&&i<n;cnt++,i++){
			;
		}
	}
	printf("%d\n",ans);
	return 0;
} 