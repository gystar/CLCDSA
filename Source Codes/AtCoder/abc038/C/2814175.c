#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    long long count=0,ans=0;
    for (int i=0; i<n; i++){
        if (i==n-1){
            count++;
            ans+=count*(count+1)/2;
        } else if(a[i]<a[i+1]){
            count++;
        } else {
            count++;
            ans+=count*(count+1)/2;
            count=0;
        }
    }
    printf("%lld\n",ans);
	return 0 ;
} 