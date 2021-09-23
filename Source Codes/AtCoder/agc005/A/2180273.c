#include <stdio.h>
#include <string.h>
int main() {
    char s[200001], a[200001];
    int l, last=0;
    scanf("%s", s);
    l = strlen(s);
    for (int i=0; i<l; i++) {
        if (s[i] == 'S')
            a[++last] = 'S';
        else {
            if (a[last] == 'S')
                last--;
            else
                a[++last] = 'T';
        }
    }
    printf("%d\n", last);
} 