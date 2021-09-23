#include <stdio.h>
int main(void) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    b=b/a;
    if (b>c) {
        printf("%d",c);
        return 0;
    }
    else {
        printf("%d",b);
        return 0;
    }
} 