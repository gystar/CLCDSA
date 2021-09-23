#include <stdio.h>
int main(void){
    long long int n,la=2,lb=1,m,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        m=lb;
        lb+=la;
        la=m;
    }
    printf("%lld\n",la);
    return 0;
} 