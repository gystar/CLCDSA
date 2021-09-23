#include <stdio.h>
int main(void){
    long long n,ans=0;
    scanf("%lld",&n);
    long long a[n+1];
    a[n]=0;
    for (long long i=0; i<n; i++){
        scanf("%lld",&a[i]);
    }
    if (n==1){
        if (a[0]==0){
            printf("0\n");
        } else {
            printf("-1\n");
        }
        return 0;
    }
    for (long long i=1; i<n; i++){
        if (a[i]>a[i-1]+1 || a[i]>i || a[0]!=0){
            printf("-1\n");
            return 0;
        } else if (a[i]>=a[i+1]){
            ans+=a[i];
        }
    }
    printf("%lld\n",ans); 
    return 0;   
} 