#include <stdio.h>
 
int main(int argc, char *argv[])
{
    int X, i, t = 0;
 
    scanf("%d", &X);
 
    for ( i = 1; i <= X; i++ ){
        t += i;
        if ( t >= X ){
            break;
        }
    }
    printf("%d\n", i);
    return 0;
} 