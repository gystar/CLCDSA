#include <stdio.h>

int main()
{   
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<=0&&b>=0){
    printf("Zero");
    return 0;
    }
    if(a>0){
        printf("Positive");
        return 0;
    }
    if((b-a+1)%2==0){
        printf("Positive");
    }else{
        printf("Negative");
    }

    return 0;
} 