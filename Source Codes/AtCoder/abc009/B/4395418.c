#include <stdio.h>
int main(void){
    // Your code here!
    int n,m1=1,m2=0,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(m1<x){
            m2 = m1;
            m1 = x;
        }
        if(m2<x && m1 != x)
            m2 = x;
    }
    printf("%d\n",m2);
} 