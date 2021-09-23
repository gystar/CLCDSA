#include <stdio.h>
#include <stdlib.h>
int MIN(int a,int b){return a<b?a:b;}
int main()
{
    int n;
    scanf("%d",&n);
    int best=200000,end=sqrt(n)+1;
    for(int i=1;i<=end;i++){
        int tmp=n;
        int sub=tmp%i+abs((tmp-tmp%i)/i-i);
        best=MIN(best,sub);
    }
    
    printf("%d",best);
    return 0;
} 