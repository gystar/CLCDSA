#include <stdio.h>
int main(void){
    // Your code here!
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if (b/a == d/c)
        printf("DRAW\n");
    else if(b/a > d/c)
        printf("TAKAHASHI\n");
    else
        printf("AOKI\n");
} 