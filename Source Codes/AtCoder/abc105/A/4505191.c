#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    if(n%k==0) printf("%d",0);
    else printf("%d",1);
    return 0;
} 