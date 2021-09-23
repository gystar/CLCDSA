#include <stdio.h>
int main(void){
    int n,k;
    scanf("%d%d",&n,&k);
    if (n>=k*2){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;   
} 