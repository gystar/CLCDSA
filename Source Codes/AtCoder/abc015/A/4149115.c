#include <stdio.h>
#include <string.h>

int main(void){
    char a[50],b[50];
    int a_len, b_len;
    scanf("%s",a);
    scanf("%s",b);
    a_len = strlen(a);
    b_len = strlen(b);
    if(a_len>b_len) printf("%s\n",a);
    else            printf("%s\n",b);
    return 0;
} 