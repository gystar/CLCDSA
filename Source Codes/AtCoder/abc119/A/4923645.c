#include<stdio.h>

int main(void)
{
        char s[100];

        scanf("%s", s);
        if(strcmp(s, "2019/04/30") <= 0) {
                printf("Heisei");
        } else {
                printf("TBD");
        }
        return 0;
} 