#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    if(a+b==n && a-b==n)
        printf("?\n");
    else if(a+b==n)
        printf("+\n");
    else if(a-b==n)
        printf("-\n");
    else
        printf("!\n");
} 