#include <stdio.h>
int main(void){
    // Your code here!
    int a=0,b=0,c=1,n,w;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        w = c;
        c = (a+b+c)%10007;
        a = b;
        b = w;
    }
    printf("%d\n",a);
} 