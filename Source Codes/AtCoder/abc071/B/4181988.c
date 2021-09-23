#include <stdio.h>
#include <string.h>

int main(void){
        char s[100000];
        scanf("%s", s);
        int a[26] = {0};
        for (int i = 0; i < strlen(s); i++) {
                a[s[i] - 'a' ]++;
        }
        for (int i = 0; i < 26; i++) {
                if (a[i]==0) {
                        printf("%c\n",'a'+i);
                        break;
                }
                if (i==25 && a[i]!=0) {
                printf("None\n");
                }
        }
        return 0;
} 