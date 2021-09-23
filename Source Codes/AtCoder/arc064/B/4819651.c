#include <stdio.h>
#include <string.h>

int main(void) {
    int i, j, len, c[26]={0}, t=0;
    char S[100010];
    scanf("%s", &S);
    len = strlen(S);
    for (i=1;i<len-1;i++) {
        c[S[i]-'a']++;
    }
    for (j=0;j<=25;j++) t += c[j];
    t += (S[0]==S[len-1]) ? 1 : 0;
    if (t%2) printf("First\n");
    else printf("Second\n");

    return 0;
} 