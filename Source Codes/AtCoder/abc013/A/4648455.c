#include <stdio.h>
int main(void){
    char s[2];
    scanf("%s",s);
    printf("%d\n",s[0]-0x40);
    return 0;
} 