#include <stdio.h>
#include <string.h>

int main(void)
{
        int a;
        char s[10], t[10] = "2019/04/30";

        scanf("%s", s);

        a = strcmp(s, t);

        if(a<0) printf("Heisei\n");
        else printf("TBD\n");

        return 0;
} 