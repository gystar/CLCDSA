#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
        char s[100000];
        scanf("%s", s);
        for (int i = 0; i < ceil((float)strlen(s)/2); i++) {
                printf("%c",s[i*2]);
        }
        printf("\n");
        return 0;
} 