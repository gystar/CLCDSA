#include <stdio.h>

int main(void) {
    int x,i,zah = 0;
    scanf("%d",&x);
    for (i = 1;;i++) {
        zah += i;
        if (zah >= x) {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
} 