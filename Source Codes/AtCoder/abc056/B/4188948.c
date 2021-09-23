#include <stdio.h>
int main(void){
    int w,a,b;
    scanf("%d%d%d",&w,&a,&b);
    if(b-(a+w)<=0&&a<=b) printf("0");
    else if(a>b) printf("%d",a-(b+w));
    else printf("%d",b-(a+w));
    return 0;
} 