#include <stdio.h>

int main(void) {
    char str[103];
    scanf("%s", str);
    int i = 0, cnt = 0;
    while(str[i] != '\0') {
        if(str[i] == '\n') { break; }
        cnt++; i++;
    }
    printf("%c%d%c\n", str[0], cnt-2, str[i-1] );
    return 0;
} 