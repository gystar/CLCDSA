#include <stdio.h>
#include <stdlib.h>

int main(void){
    long long int n, x, i, j, temp, ans=0;
    scanf("%lld %lld", &n, &x);
    long long int a[n];
    for(int i=0; i<n; i++) {
         scanf("%lld", &a[i]);
    }
    for(i=0; i<n; i++){
        for(j=n-1; j>i; j--){
            if(a[j] < a[j-1]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    for(i=0; i<n; i++){
        if(x-a[i]>=0){
            x -= a[i];
            ans++;
        }else break;
        if(i==n-1 && x>0) ans--;
    }
    printf("%lld", ans);
} 