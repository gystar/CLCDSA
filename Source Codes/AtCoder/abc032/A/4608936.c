#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    while(n%a+n%b>0)
        n+=1;
    printf("%d\n",n);
} 