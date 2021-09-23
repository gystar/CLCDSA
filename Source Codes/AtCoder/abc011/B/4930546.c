#include <stdio.h>
#include <ctype.h>
int main(void){
    int i;
    char name[13];
    scanf("%s", name);
    for(i=0; name[i]; i++)
        putchar(i ? tolower(name[i]) : toupper(name[i]));
    return 0;
} 