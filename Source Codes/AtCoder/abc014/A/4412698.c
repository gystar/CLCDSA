#include <stdio.h>
int main(void){
    // Your code here!
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d\n",(m-n%m)%m);
} 