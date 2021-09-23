#include <stdio.h>
#define max(a,b) (a>b?a:b)
int main(void){
    int a,b,c,k,i=1;
    scanf("%d%d%d%d",&a,&b,&c,&k);
    while(k){
        i*=2;
        k--;
    }
    printf("%d\n",a+b+c+max(a,max(b,c))*(i-1));
    return 0;
} 