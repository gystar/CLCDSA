#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int red,blue;
    red = b-a;
    if(red<0) red+=10;
    blue = a-b;
    if(blue<0) blue+=10;
    if(red<blue){
        printf("%d\n",red);
    }
    else{
        printf("%d\n",blue);
    }
    return 0;
} 