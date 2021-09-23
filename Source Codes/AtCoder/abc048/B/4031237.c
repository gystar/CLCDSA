#include <stdio.h>
int main(void){
    long a,b,x;
    scanf("%ld%ld%ld",&a,&b,&x);
    
    long c = a/x, d = b/x;
    long ans = d-c;
    
    if(!(a%x))
    {
        ans++;
    }
    
    printf("%ld",ans);
    return 0;
} 