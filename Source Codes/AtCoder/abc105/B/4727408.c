#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    n=n%28;
    if(n==1 || n==2 || n==3 || n==5 || n==6 || n==9 || n==10 || n==13 ||  n==17) printf("No\n");
    else printf("Yes\n");
} 