#include <stdio.h>
int main(void){
    long long int x,y;
    scanf("%lld%lld",&x,&y);
    printf("%lld\n",x>y?x:y);
    return 0;
} 