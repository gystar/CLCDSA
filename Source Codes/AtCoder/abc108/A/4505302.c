#include <stdio.h>

int main(){
    int k;
    scanf("%d",&k);
    if(k%2==0) printf("%d",(k/2)*(k/2));
    else printf("%d",((k-1)/2)*((k+1)/2));
    return 0;
} 