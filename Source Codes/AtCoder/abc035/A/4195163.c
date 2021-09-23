#include <stdio.h>
int main()
{   float h,w;
    scanf("%f%f",&w,&h);
    if(h/w==0.75)printf("4:3\n");
    else printf("16:9\n");
    return 0;
} 