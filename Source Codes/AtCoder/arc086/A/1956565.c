#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
		int N,K,A[200000],i;
		int ans=0,count[200000]={0};
		scanf("%d", &N);
		scanf("%d", &K);
		for (i = 0; i < N; i++)scanf("%d",&A[i]);
		for (i = 0; i < N; i++)count[A[i]-1] +=1;
		qsort(count,N,sizeof(int),compare_int);
		  for(i=0;i<N-K;i++)ans+=count[i];
			  printf("%d",ans);
		return 0;
} 