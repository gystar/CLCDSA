#include <stdio.h>
#include <strings.h>

int main() {
    int n, i, j;
    char str[10]={}, dst[10]={};
    scanf("%d", &n);
    for (i=0; i<n; i++)
        str[i] = 'a';
    for (i=0; i<n; i++)
        dst[i] = 'c';
    for (;;) {
        printf("%s\n", str);
        if (strcmp(str, dst) == 0)
            break;
        for (i=n-1; i>=0; i--) {
            if (str[i] == 'a') {
                str[i] = 'b';
                for (j=i+1; j<n; j++)
                    str[j] = 'a';
                break;
            } else if (str[i] == 'b') {
                str[i] = 'c';
                for (j=i+1; j<n; j++)
                    str[j] = 'a';
                break;
            }
        }
    }
    return 0;
} 