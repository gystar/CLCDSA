#include<stdio.h>

int main(void)
{
    int r;
    scanf("%d",&r);
    if (r<1200){
        printf("ABC");
    } else if (r<2800)
    {
        printf("ARC");
    }
    else
    {
        printf("AGC");
    }
    
} 