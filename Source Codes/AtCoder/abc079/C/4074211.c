#include<stdio.h>
int main()
{
    char A,B,C,D;
    int a,b,c,d;
    scanf("%c%c%c%c",&A,&B,&C,&D);
    a=A-'0';b=B-'0';c=C-'0';d=D-'0';
    if(a+b+c+d==7)
        printf("%d+%d+%d+%d=7",a,b,c,d);
    else if(a+b+c-d==7)
        printf("%d+%d+%d-%d=7",a,b,c,d);
    else if(a+b-c+d==7)
        printf("%d+%d-%d+%d=7",a,b,c,d);
    else if(a-b+c+d==7)
        printf("%d-%d+%d+%d=7",a,b,c,d);
    else if(a+b-c-d==7)
        printf("%d+%d-%d-%d=7",a,b,c,d);
    else if(a-b+c-d==7)
        printf("%d-%d+%d-%d=7",a,b,c,d);
    else if(a-b-c+d==7)
        printf("%d-%d-%d+%d=7",a,b,c,d);
    else if(a-b-c-d==7)
        printf("%d-%d-%d-%d=7",a,b,c,d);
} 