#include <stdlib.h>
#include <stdio.h>

int main()
{   int w,a,b;
    scanf("%d%d%d",&w,&a,&b);
    if(b>a+w){
        printf("%d",b-(a+w));
    }else if(a<=b&&b<=a+w){
        printf("0");
    }else if(a>b+w){
        printf("%d",a-(b+w));
    }else printf("0");
    return 0;
} 