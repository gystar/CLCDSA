#include <stdio.h>
int main(void){
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0){
        sum+=n;
        n--;
    }
    printf("%d\n",sum);
    return 0;
} 