#include <stdio.h>
#include <ctype.h>
int main(void){
    char a[10],b[10],c[10];
    scanf("%s %s %s",a,b,c);
    printf("%c%c%c",toupper(a[0]),toupper(b[0]),toupper(c[0]));
    return 0;
} 