#include <stdio.h>
#include <string.h>
#define sizeS 1001
// ?????
void stringCompess (char str[]) {
    int len;
    len = strlen(str);
    int left = 0, right = left;
    // ??
    while (1) {
        while (str[left] == str[right]) {
            right++;
        }
        printf("%c%d", str[left], right-left);
        left = right;
        if (right == len) {
            break;
        }
    }
    printf("\n");
}

int main(int argc, char const *argv[]) {
    // ??
    char str[sizeS];
    // ??
    scanf("%s", str);
    // ?????
    stringCompess(str);
    return 0;
} 