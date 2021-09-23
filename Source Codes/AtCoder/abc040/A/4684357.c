#include <stdio.h>
int main(void){
    // Your code here!
    int n,x;
    scanf("%d%d",&n,&x);
    if(n/2>=x)
        printf("%d\n",x-1);
    else
        printf("%d\n",n-x);
} 