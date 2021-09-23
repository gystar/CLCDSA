#include <stdio.h>
int main(void){
    // Your code here!
    int n,m,l;
    scanf("%d%d%d",&n,&m,&l);
    if(n==m) printf("%d\n",l);
    else if(n==l) printf("%d\n",m);
    else printf("%d\n",n);
} 