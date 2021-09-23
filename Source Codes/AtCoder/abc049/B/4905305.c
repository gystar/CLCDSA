#include <stdio.h>
#include <string.h>
int main(void)
{
    int h,w;
    scanf("%d%d", &h,&w);
    for(int i=0; i<h; i++)
    {
        char c[w+1];
        scanf("%s", c);
        for(int j=0; j<w; j++) printf("%c", c[j]);
        printf("\n");
        for(int j=0; j<w; j++) printf("%c", c[j]);
        printf("\n");
    }
    return 0;
} 