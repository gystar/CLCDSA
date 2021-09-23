#include <stdio.h>
int main(void) {
    int i, j, k, l;
    int H, W, cnt;
    char S[51][51];
    scanf("%d %d%*c", &H, &W);
    for (i = 0; i < H; i++) scanf("%s", S[i]);
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                cnt = 0;
                for (k = -1; k <= 1; k++) {
                    for (l = -1; l <= 1; l++) {
                        if (S[i+k][j+l] == '#') cnt++;
                    }
                }
                printf("%d", cnt);
            }
            else printf("#");
        }
        printf("\n");
    }
    return 0;
} 