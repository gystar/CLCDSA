#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    int n,k;
    scanf("%d%d",&n,&k);
    long long sum=0;
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if (i<k){
            sum+=a[i];
        }
    }
    long long ans=sum;
    for (int i=0; i<n-k; i++){
        sum=sum-a[i]+a[k+i];
        ans+=sum;
    }
    
    printf("%lld\n",ans);
	return 0 ;
} 