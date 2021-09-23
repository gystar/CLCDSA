#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void){
    int cnt = 0;
    bool AC = true;
    char S[11];
    scanf("%s", S);
    for (int i = 1; i < strlen(S); i++) {
        if (i >= 2 && i < strlen(S) - 1 && S[i] == 'C') cnt++;
        else if (S[i] < 'a' || S[i] > 'z') AC = false;
    }
    if (S[0] != 'A' || cnt != 1) AC = false;
    printf(AC ? "AC" : "WA");
    return 0;
} 