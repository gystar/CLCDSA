#include <stdio.h>
long long min(long long a, long long b){
    if(a<b){
        return(a);
    } else {
        return(b);
    }
}
int main(void){
    long long a,b,c,men;
    scanf ("%lld%lld%lld",&a,&b,&c);
    if (a%2==0 || b%2==0 || c%2==0){
        printf("0\n");
    } else {
        men=min(min(a*b,b*c),min(b*c,c*a));
        printf("%lld\n",men);
	    return 0 ;
    }
} 