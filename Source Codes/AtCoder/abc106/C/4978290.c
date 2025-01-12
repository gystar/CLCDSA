#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 104
#define LL long long

void solve(char *str, int len, LL K) {
    int i;
    for(i = 0; i < len; ++i) {
        if(str[i] != '1') { break; }
        if(i >= K-1) { break; }
    }
    printf("%c\n", str[i]);
} 

int main()
{
    char *str = (char*)malloc(MAXLEN * sizeof(char));
    LL k;
    scanf("%s", str);
    scanf("%lld", &k);
    int len = strlen(str);
    //printf("k = %lld\n", k);
    solve(str, len, k);
    return 0;
} 