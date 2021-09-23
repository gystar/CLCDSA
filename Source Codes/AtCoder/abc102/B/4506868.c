#include <stdio.h>

int main(){
    int n;scanf("%d",&n);
    int m,M;
    int a[n];scanf("%d",&a[0]);m=a[0],M=a[0];
    for(int i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(m>a[i]) m=a[i];
        if(M<a[i]) M=a[i];
    }   
    printf("%d",M-m);
    return 0;
} 