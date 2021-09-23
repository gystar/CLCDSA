#include<stdio.h>
int main()
{
    char A[5];
    int a,b,c,d;
    scanf("%s",A);
    a=A[0]-48;
    b=A[1]-48;
    c=A[2]-48;
    d=A[3]-48;
    if(a+b+c+d==7)
        printf("%d+%d+%d+%d=7",a,b,c,d);
    else if(a+b+c-d==7)
        printf("%d+%d+%d-%d=7",a,b,c,d);
    else if(a+b-c+d==7)
        printf("%d+%d-%d+%d=7",a,b,c,d);
    else if(a+b-c-d==7)
        printf("%d+%d-%d-%d=7",a,b,c,d);
    else if(a-b+c+d==7)
        printf("%d-%d+%d+%d=7",a,b,c,d);
    else if(a-b+c-d==7)
        printf("%d-%d+%d-%d=7",a,b,c,d);
    else if(a-b-c+d==7)
        printf("%d-%d-%d+%d=7",a,b,c,d);
    else
        printf("%d-%d-%d-%d=7",a,b,c,d);
    return 0;
} 