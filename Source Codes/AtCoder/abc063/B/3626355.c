#include <stdio.h>
#include <string.h>

int main(void) {
    char s[30];
    scanf("%s",s);
    for(int i=0; i<strlen(s); i++) {
        for(int j=0; j<strlen(s); j++) {
            if(i==j) continue;
            if(strncmp(&s[i],&s[j],1)==0) {
                puts("no");
                return 0;
            }
        }
    }
    puts("yes");
    return 0;
} 