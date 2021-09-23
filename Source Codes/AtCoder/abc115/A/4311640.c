#include <stdio.h>

int main(){
    int D, cnt;
    scanf("%d", &D);
    cnt = 25 - D;
    printf("Christmas");
    for(int i = 0; i < cnt; i++) printf(" Eve");
    return 0;
} 