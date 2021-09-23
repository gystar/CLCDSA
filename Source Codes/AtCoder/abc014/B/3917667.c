#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int a[n];
    int b[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        scanf("%d",a+i);
        b[i] = x/pow(2,n-i-1);
        x -= b[i]*pow(2,n-i-1);
    }
    for(int i = 0;i<n;i++){
        
        sum += a[i]*b[n-i-1];
    }
    printf("%d\n",sum);
    return 0;
} 