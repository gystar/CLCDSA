#include<stdio.h>
int main(){
    int n, a, b, c;
    scanf("%d %d %d",&n, &a, &b);
    c = b;
    if(n*a < c)c=n*a;
    printf("%d\n", c);
    return 0;
} 