#include <stdio.h>
int Min(int a,int b){
    if(a<=b)return a;
    return b;
}
int main()
{   int q,h,s,d,n;
    scanf("%d%d%d%d%d",&q,&h,&s,&d,&n);
    long min=Min(8*q,Min(4*h,Min(2*s,d)));
    long ans=n/2*min+(n%2)*Min(4*q,Min(2*h,s));
    printf("%ld",ans);

    return 0;
} 