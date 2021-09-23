#include <stdio.h>
int main(void)
{
    int h, w, i, j;
    char a[101][101];

    scanf("%d %d", &h, &w);
    
    for(i=0;i<h;i++){
        scanf("%s", a[i]);
    }

    for(i=0;i<h;i++){
        printf("%s", a[i]);
        printf("\n");
        printf("%s", a[i]);
        printf("\n");
    }
    
    return 0;
} 