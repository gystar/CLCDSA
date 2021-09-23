#include<stdio.h>
int main(void)
{
    int x,y;
    scanf("%d ",&x);
    scanf("%d",&y);
    if(y>x){
        printf("Better\n");
        return 0;
    }
    printf("Worse\n");
    return 0;
} 