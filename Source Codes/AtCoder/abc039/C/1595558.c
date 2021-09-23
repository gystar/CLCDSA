#include <stdio.h>
static char key[][3] = {"Do", "Do#", "Re", "Re#", "Mi", "Fa", "Fa#", "So", "So#", "La", "La#", "Si"};
static char s[21], s_do[] = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBW";
int main(void) {
    int i, j, is_failed;
    scanf("%s", s);
    for (i = 0; i < 12; ++i) {
        is_failed = 0;
        for (j = 0; j < 12; ++j)
            if (s[j] != s_do[i + j])
                is_failed = 1;
        if (!is_failed)
            break;
    }
    printf("%s\n", key[i]);
    return 0;
} 