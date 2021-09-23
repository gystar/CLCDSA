#include <stdio.h>

int main(void)
{
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a == b || b == c || c == a)
                {
                        if(a == b && b == c){printf("%d",1);}
                        else{printf("%d",2);}
                }
        else{printf("%d",3);}
        return 0;
} 