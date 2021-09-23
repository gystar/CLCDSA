#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    int a,b,g;
    scanf("%d%d",&a,&b);
    g = fmin(abs(a-b),10-abs(a-b));
    printf("%d\n",g);
} 