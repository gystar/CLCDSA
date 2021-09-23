#include <stdio.h>
int main(void){
    int n,m,l,p,q,r,ans=0;
    scanf("%d%d%d%d%d%d",&n,&m,&l,&p,&q,&r);
    if ( (n/p)*(m/q)*(l/r)>ans){
        ans=(n/p)*(m/q)*(l/r);
    }
    if ( (n/p)*(m/r)*(l/q)>ans){
        ans=(n/p)*(m/r)*(l/q);
    }
    if ( (n/q)*(m/p)*(l/r)>ans){
        ans=(n/q)*(m/p)*(l/r);
    }
    if ( (n/q)*(m/r)*(l/p)>ans){
        ans=(n/q)*(m/r)*(l/p);
    }
    if ( (n/r)*(m/p)*(l/q)>ans){
        ans=(n/r)*(m/p)*(l/q);
    }
    if ( (n/r)*(m/q)*(l/p)>ans){
        ans=(n/r)*(m/q)*(l/p);
    }
    printf("%d\n",ans);
    return 0;
} 