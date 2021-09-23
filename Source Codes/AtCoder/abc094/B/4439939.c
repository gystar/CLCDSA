#include <stdio.h>

int main(void){
    
    int n,m,x,a,b;
    a=0;
    b=0;
    scanf("%d %d %d",&n,&m,&x);
    int A[m];
    int ma[100]={0};
    
    for(int i=0; i<m; i++){
        scanf("%d",&A[i]);
        ma[A[i]]=1;
    }
    for(int i=1; i<x; i++){
        a+=ma[i];
    }
    for(int i=x; i<n; i++){
        b+=ma[i];
    }
    printf("%d",a<b? a:b);
} 