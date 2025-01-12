#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void){
    int N;
    char W[100][11];
    bool ans = true;
    scanf("%d%*c", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s%*c", W[i]);
        if (i >= 1) {
            if (W[i][0] != W[i-1][strlen(W[i-1])-1]) ans = false;
            for (int j = 0; j < i; j++) if (strcmp(W[j], W[i]) == 0) ans = false;
        }
    }
    printf("%s\n", (ans ? "Yes" : "No"));
    return 0;
} 