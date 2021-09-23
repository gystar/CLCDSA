#include <stdio.h>
#include <string.h>
int main()
{   char a[101],b[101];
    scanf("%s%s",a,b);
        if(strlen(a)>strlen(b)){
            printf("GREATER");
            return 0;
        }
        if(strlen(b)>strlen(a)){
            printf("LESS");
            return 0;
        }
    int c=strcmp(a,b);
    if(c>0)printf("GREATER");
    else if(c<0)printf("LESS");
    else printf("EQUAL");
    return 0;
} 