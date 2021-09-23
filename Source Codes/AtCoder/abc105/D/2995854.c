#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int sort(const void *a, const void *b){
    if( *(long long int*)a - *(long long int*)b < 0 )
        return -1;
    if( *(long long int*)a - *(long long int*)b > 0 )
        return 1;
    return 0;
}

int main(void){
    int n,m;
    scanf("%d%d",&n,&m);
    long long sum[n+2],ans=0;
    int a[n+2];
    sum[0]=0;
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum[i+1]=(sum[i]+a[i])%m;
    }
    qsort (sum,n+1,sizeof(long long),sort);
    long long count=1;
    for (int i=0; i<n; i++){
        if (sum[i]==sum[i+1]){
            count++;
        } else {
            if(count>1){
                ans+=count*(count-1)/2;
                count=1;
            }
        }
    }
    ans+=count*(count-1)/2;
    printf("%lld\n",ans);
	return 0 ;
} 