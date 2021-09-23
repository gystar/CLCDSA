#include <stdio.h>
#define sizeS 101
#define sizeN 100
// ??
int N, l[sizeN], r[sizeN];
// ??????
void ReverseStr (int n,char S[]) {
    char buf[sizeS];
    int len = r[n] - l[n];
    int no = r[n];
    for (size_t i = 0; i <= len; i++) {
        buf[i] = S[no];
        no --;
    }
    //printf("buf %s\n", buf);
    no = l[n];
    // ????????????????
    for (size_t i = 0; i <= len; i++) {
        S[no] = buf[i];
        no ++;
    }
}
// ???
int main(int argc, char const *argv[]) {
    // ???
    char S[sizeS];
    // ??
    scanf("%s", S);
    scanf("%d", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%d %d", &l[i], &r[i]);
        l[i]--; r[i]--;
    }
    // ??
    for (size_t i = 0; i < N; i++) {
        ReverseStr(i, S);
    }
    // ??
    printf("%s\n", S);
    return 0;
} 