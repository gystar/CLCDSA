#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int sum=0;
    int a,ct=0;
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        sum+=a;
        if(a!=0) ct++;
    }
    int ans;
    if(sum%ct==0) ans=sum/ct;
    else ans=sum/ct+1;
    printf("%d\n",ans);
} 