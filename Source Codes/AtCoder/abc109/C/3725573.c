#include <stdio.h>
int gcd(int a,int b){
    int r;
    if(a<b){
        int tmp=a;
        a=b;
        b=tmp;
    }
    r=a%b;
    while(r>0){
        a=b;
        b=r; 
        r=a%b;
    }
    return b;
}
int main()
{   int n,x;
    scanf("%d%d",&n,&x);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=abs(x-a[i]);
    }
    if(n==1){
        printf("%d",abs(x-a[0]));
        return 0;
    }
    int p=gcd(b[0],b[1]);
    for(int i=2;i<n;i++){
        p=gcd(p,b[i]);
    }
    printf("%d",p);
    return 0;
} 