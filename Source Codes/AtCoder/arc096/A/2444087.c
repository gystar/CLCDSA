#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c;
    int x, y;
    int sum=0;

    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
    
    if(a + b < 2 * c)
        sum = a*x + b*y;
    else
        sum = x>y ? (a>2*c ? 2*c*x : 2*c*y+a*(x-y)) : (b>2*c ? 2*c*y : 2*c*x+b*(y-x));

    printf("%d\n", sum);

    return 0;
} 