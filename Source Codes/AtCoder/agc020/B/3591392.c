#include <stdio.h>
int min(int a,int b){return a<b?a:b;}
int main(void){
    long long k,max=2,min=2,x,y;
    scanf("%lld",&k);
    long long a[k];
    for (int i=0; i<k; i++){
        scanf("%lld",&a[i]);
    }
    for (int i=k-1; i>=0; i--){
        x=((min+a[i]-1)/a[i])*a[i];
        y=(max/a[i])*a[i];
        if (x>y){
            printf("-1\n");
            return 0;
        }
        
        
        
        min=x;
        max=y+a[i]-1;
        
    }
    printf("%lld %lld\n",min,max);
    return 0;
} 