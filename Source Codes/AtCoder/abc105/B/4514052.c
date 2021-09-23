#include <stdio.h>

int main(){
    int n;scanf("%d",&n);
    if(n>=18||n%4==0||n%7==0||n==11||n==15)printf("Yes\n");
    else printf("No\n");
    return 0;
} 