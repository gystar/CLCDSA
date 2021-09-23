#include<stdio.h>
int main(void)
{
        int a,b,c,d;

        scanf("%d%d%d",&a,&b,&c);

        if((a<1||b<1||c<1)||(100<a||100<b||100<c))
                printf("?????????????\n");
        else
                d = ( a * b) / 2;
        printf("%d\n",d);
        return 0;
} 