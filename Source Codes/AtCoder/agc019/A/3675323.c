#include <stdio.h>
int Min(int a,int b){
    if(a<=b)return a;
    return b;
}
int main()
{   int q,h,s,d,n;
    scanf("%d%d%d%d%d",&q,&h,&s,&d,&n);
    long min=Min(8*q,Min(4*h,Min(2*s,d)));
    long ans;
    if(min==d&&n%2==1){
        ans=n/2*min+Min(4*q,Min(2*h,s));
    }else{
        ans=min*n/2;
    }
    printf("%ld",ans);

    return 0;
} 